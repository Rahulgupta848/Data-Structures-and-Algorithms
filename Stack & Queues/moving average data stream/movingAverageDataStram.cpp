// you will be getting a stream of integers each element at time 
// find out the average of latest k elements

// e.g. stream---> 1,10,3,5,4  && k=3
//     output----> [1.0 , 5.5 ,7.0 ,6.0 ,4.0]

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

double calculateAvg(queue<int> &q, int d, int &sum ,int k){
     sum += d;
     q.push(d);
     if(q.size() > k){
          sum -= q.front();
          q.pop();
     }
     return double(sum)/double(q.size());
}
vector<double> getAvg(vector<int> arr , int k){
     queue <int> q;
     vector<double> ans;
     int sum = 0;
     for(int i = 0 ;i<arr.size() ;i++){
          double res = calculateAvg(q,arr[i] ,sum ,k);
          ans.push_back(res);
     }
     
     return ans;
}

void print(vector<double> arr){
     for (int i = 0; i < arr.size(); i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){
     vector<int> stream1 = {1,10,3,5,4};

     vector<double> ans1 = getAvg(stream1 ,3);
     print(ans1);
     return 0;
}