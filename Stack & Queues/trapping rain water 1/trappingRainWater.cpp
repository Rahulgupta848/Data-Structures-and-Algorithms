// 1. Given n non-negative integers representing an elevation map where the width of each bar is 1.
// 2. Compute how much water it can trap after raining.

// e.g.1 : [1,0,2,1,0,1,3,2,1,2,1] ----> 6

// solution : 
//           1.find overall max of each element to the right
//           2.find overall max of each element to the left
//           3.for every element max amoutn of water that can be store is the
//                min of max right and max left - curr height

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> getNextMaxElement(vector<int>arr){
     vector<int> ans (arr.size(),0);
     int max = -1;
     for(int i = arr.size()-1;i>=0;i--){
          int crrHeight = arr[i];
          if(crrHeight <= max){
               ans[i] = max;
          }else{
               ans[i] = -1;
               max = crrHeight;
          }
     }
     return ans;
}

vector<int> getPrevMaxElement(vector<int>arr){
     vector<int> ans (arr.size(),0);
     int max = -1;
     for(int i=0;i<arr.size();i++){
          int crrHeight = arr[i];
          if(crrHeight <= max){
               ans[i] = max;
          }else{
               ans[i] = -1;
               max = crrHeight;
          }
     }
     return ans;
}

void printArr(vector<int> arr){
     for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int getTrappedWater(vector<int> arr){
     vector<int> nextMaxArr = getNextMaxElement(arr); 
     vector<int> prevMaxArr = getPrevMaxElement(arr); 
     int totalWater = 0;
     
     for(int i =0 ;i<arr.size();i++){
          int crrHeight = arr[i];
          int nextMax = nextMaxArr[i];
          int prevMax = prevMaxArr[i];
          if(nextMax != -1 && prevMax!= -1){
               int crrTotal = min(nextMax,prevMax) - crrHeight;
               totalWater += crrTotal;
          }
     }

     return totalWater;
}

int main(){
     vector<int> arr1 = {1,0,2,1,0,1,3,2,1,2,1};
     vector<int> arr2 = {4,1,0,2,1,0,1,3,2,1,2,1};
     cout<<getTrappedWater(arr1)<<endl;
     cout<<getTrappedWater(arr2)<<endl;
     return 0;
}
