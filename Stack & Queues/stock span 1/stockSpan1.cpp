// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing the prices of a share on n days.
// 3. You are required to find the stock span for n days.
// 4. Stock span is defined as the number of days passed between the current day and the first day before today when price was higher than today.
// e.g.
// for the array [2 5 9 3 1 12 6 8 7] 
//ans ===========[1 2 3 1 1  6 1 2 1] 
// span for 2 is 1
// span for 5 is 2
// span for 9 is 3
// span for 3 is 1
// span for 1 is 1
// span for 12 is 6
// span for 6 is 1
// span for 8 is 2
// span for 7 is 1

// requirements :-
//      1.if no stock exists put ith index +1
//      2.if stock exists then current idx - greater stock idx

// solutions :-
//      1.push -1 in stack
//      2.push every element by iterating array.
//      3.while pushing check top element is smaller ?pop : store difference of index

#include <iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector <int> arr){
     stack<int> s;
     vector<int> ans(arr.size(),0);
     s.push(-1);
     for(int i =0;i<arr.size();i++){
          int currentStock = arr[i];

          while(s.top() != -1 && arr[s.top()]<= currentStock){
               s.pop();
          }
          if(s.top() == -1){
               ans[i] = i + 1;  
          }else{
               ans[i] = i - s.top();
          }
           s.push(i);
     }

     return ans;
}

void printList(vector<int> arr){
     for(int i = 0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main()
{
     vector<int> arr = {2, 5, 9, 3, 1, 12, 6, 8, 7};
     vector<int> ans = stockSpan(arr);
     printList(ans);

     return 0;
}