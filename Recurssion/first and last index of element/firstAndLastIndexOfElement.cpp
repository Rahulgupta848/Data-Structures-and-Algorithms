// given array of integers with repeating elements find the first and last occurance index of element
// e.g. arr = [3,6,7,2,24,75,3,9,1,5,88,23,2,9,0]
//      k = 3
//      first index = 0
//      last index = 6

#include<iostream>
#include<vector>
using namespace std;

int getFirstOccuringIndex(int k ,vector<int> arr , int idx){
     if(idx == arr.size()){
          return -1;
     }
     if(arr[idx] == k){
          return idx;
     }
     return getFirstOccuringIndex(k,arr,idx+1);
}

int getLastOccuringIndex(int k , vector<int> arr , int idx){
     if(idx == arr.size()){
          return -1;
     }
     int i = getLastOccuringIndex(k,arr,idx+1);
     if(i == -1){
          if(arr[idx] == k){
               return idx;
          }
     }
     return i;
}

int main(){
     vector<int> arr = {3,6,7,2,24,75,3,9,1,5,88,23,2,9,0};
     int k = 2;
     cout<<"first index "<<getFirstOccuringIndex(k ,arr , 0)<<endl;
     cout<<"last index "<<getLastOccuringIndex(k , arr, 0)<<endl;
     return 0;
}
