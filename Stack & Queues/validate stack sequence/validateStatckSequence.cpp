// 1: Given two sequences pushed and popped with distinct values.
// 2: You have to return true if and only if this could have been the result of a sequence of push and pop operations on an initially empty stack

// e.g.1 push = [7,2,9,4,5]
//      pop = [4,5,9,2,7]
//      ans = true

// e.g.2 push =[1,2,3,4,5]
//      pop = [4,3,5,1,2]
//      ans = false

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool validateStack(vector<int>push , vector<int>pop){
     int i=0;
     int j=0;
     stack<int> s;
     s.push(push[i]);
     while(i<push.size() && j<pop.size()){
          if(pop[j] == s.top()){
               s.pop();
               j++;
          }else{
               i++;
               if(i<push.size()){
                    s.push(push[i]);
               }
          }
     }
     if(s.empty()){
          return true;
     }else{
          return false;
     }

}

int main()
{
     vector<int> push1 = {7, 2, 9, 4, 5};
     vector<int> pop1 = {4, 5, 9, 2, 7};

     vector<int> push2 = {1, 2, 3, 4, 5};
     vector<int> pop2 = {4, 3, 5, 1, 2};

     cout<<validateStack(push1,pop1)<<endl;
     cout<<validateStack(push2,pop2)<<endl;
     return 0;
}