// consider the array as circular array find next greater array for given array
// e.g = [3,8,4,1,2]
// ----->[8,-1,8,2,3]

// solution:-
//      1. traverse the array and set the initial state of stack such that element must be pushed only when 
//           it is greater than its previous element because we are looking for next greater elements from right side.

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void printArr(vector<int> arr){
     for(int i = 0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

void findSolution(vector<int> arr){
     stack<int> s;
     s.push(-1);
     vector<int> ans={0,0,0,0,0};
     // traverse the array and set the initial state of stack such that pop the top of stack if it is smalller than current traversing element.
     for(int i = arr.size()-2;i>=0;i--){
          if(s.top() == -1){
               s.push(arr[i]);
          }
          else{
               int el = arr[i];
               while(s.top() != -1 && s.top() <= el){
                    s.pop();
               }
               s.push(el);
          }
     }
     
     // emplment next greater element 
     for(int i = arr.size()-1;i>=0;i--){
          int el = arr[i];
          while(s.top() != -1 && s.top()<= el){
               s.pop();
          }
          ans[i] = s.top();
          s.push(el);
     }

     printArr(ans);
}

int main(){
     vector<int> arr = {3,8,1,4,2};
     findSolution(arr);

     return 0 ;
}