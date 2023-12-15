// Given an array, print the Next Smaller Element (NSE) for every element.
// The NSE for an element x is the first smaller element on the right side of x in the array.
// Elements for which no smaller element exist (on the right side), consider NSE as -1.

// Input: [4, 8, 5, 2, 25]
// Output: [2, 5, 2, -1, -1]


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printElement(vector<int> v){
     for(int i = 0;i<v.size();i++){
          cout<<v[i]<<endl;
     }
}

int main()
{
     vector<int> v = {4, 8, 5, 2, 25};
     vector<int> ans(5,0);
     stack<int> s;
     s.push(-1);
     for (int i = v.size() -1; i >= 0; i--)
     {
          int curr = v[i];
          while(s.top() >= curr){
               s.pop();
          };
          ans[i] = s.top();
          s.push(curr);
     }

     for(int i = 0;i<ans.size();i++){
          cout<<ans[i]<<endl;
     }
     return 0;
}