#include<iostream>
#include<queue>
#include<vector>
using namespace std;
//setp 1. insert all data in queue
//ste 2 .for k diff remove and add k-1 elements and re push in queue till remiang elment is one.

int getJosephuesSoln(vector<int> arr,int k){
     queue<int> q ;
     for(int i=0;i<arr.size();i++){
          q.push(arr[i]);
     }

     while(q.size() != 1){
          for(int i=0;i< k-1;i++){
               int t = q.front();
               q.pop();
               q.push(t);
          }
          q.pop();
     }
     return q.front();

}

int main(){
     vector<int> arr = {6,8,7,3,4,5,2};
     int k = 5;
     cout<<getJosephuesSoln(arr,k)<<endl;
     return 0;
}
