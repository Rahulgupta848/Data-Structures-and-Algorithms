#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> arr){
     for(int i = 0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

vector<int> getIndices(vector<int> arr, int k, int idx){
     if(idx == arr.size()){
          return vector<int>{};
     }

     vector<int> aans = getIndices(arr,k,idx+1);
     if(arr[idx] == k){
          aans.push_back(idx);
     }
     return aans;
}

int main(){
     vector<int> arr = {3,6,7,2,24,75,3,9,1,5,88,23,2,9,0};
     int k = 2;

     vector<int> ans = getIndices(arr,k,0);
     printArr(ans);
     return 0;
}
