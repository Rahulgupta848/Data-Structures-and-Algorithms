#include<iostream>
#include<vector>
using namespace std;

int getMax(vector<int> arr, int n){
     if(n == arr.size()-1){
          return arr[n];
     }
     return max(arr[n],getMax(arr,n+1));
}

int main(){
     vector<int> arr = {22,56,1,567,8,3,67,2,6,23,0,12};
     cout<<getMax(arr,0);
     return 0;
}