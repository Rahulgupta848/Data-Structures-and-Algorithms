// consider the array as circular array find next smaller array for given array
// e.g = [3,8,4,1,2]
// ----->[8,-1,8,2,3]

// solution:-
//      1. traverse the array and set the initial state of stack such that element must be pushed only when 
//           it is greater than its previous element because we are looking for next smaller elements from right side.

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
     // traverse the array and set the initial state of stack
     for(int i = arr.size()-2;i>=0;i--){

     }
}

int main(){
     vector<int> arr = {3,8,1,4,2};
     findSolution(arr);

     return 0 ;
}