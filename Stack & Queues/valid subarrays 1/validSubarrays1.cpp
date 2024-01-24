// given array of integers find total valid subarrays such that :-
//      first element of subarray must be smaller than next upcomming elements.

// e.g. [1,3,2] -- 5
//      [1,4,2,5,3] -- 11

// solution 
// 1.when stream element arrives add it to sum variable.
// 2. add that element to queue
// 3. check if size of queue is greater than k ? pop element and subtract it from queue.
// 4.divide sum by size of queue

#include<iostream>
#include<vector>
using namespace std;

int getValidSubarray1(vector<int> arr){
     int len = arr.size();
     int smallest = arr[len-1];
     int count = 1;
     if(len == 0){
          return 0;
     }

     for(int i = len-2 ;i>=0;i--){
          int crr = arr[i];
          if(crr <= smallest){
               int subArraySize = len-i;
               count += subArraySize;
               smallest = crr;
          }else{
               count+=1;
          }
     }
     return count;
}

int main(){
     vector<int> arr1 = {1,3,2};
     vector<int> arr2 = {1,4,2,5,3};

     cout<<getValidSubarray1(arr1)<<endl;
     cout<<getValidSubarray1(arr2)<<endl;
     return 0;
}

