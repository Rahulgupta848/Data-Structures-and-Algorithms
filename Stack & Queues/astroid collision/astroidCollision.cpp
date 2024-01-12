#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> getAstroidCollision(vector<int> arr){
     vector<int> ans;
     stack<int> s;

     for(int i = 0;i<arr.size();i++){
          int el = arr[i];
          if(s.empty() || el > 0){
               s.push(el);
          }else{
               s.push(el);
               bool loop = true;
               while(loop && s.size()>=2){
                    int t1 = s.top();
                    s.pop();
                    int t2 = s.top();
                    s.pop();

                    if(t1 + t1 == 0){
                         loop = false;
                    }else if(t1 + t2 < 0){
                         s.push(t1);
                    }else{
                         s.push(t2);
                         loop = false;
                    }
               }
          }
     }

     while(!s.empty()){
          ans.push_back(s.top());
          s.pop();
     }

     return ans;
}

void printArr(vector<int> arr){
     for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
     vector<int> arr1 = {-1,1,2,-1,3,-3,3};
     vector<int> arr2 = {1,2,-3};

     vector<int> ans1 = getAstroidCollision(arr1);
     vector<int> ans2 = getAstroidCollision(arr2);
     printArr(ans1);
     printArr(ans2);
     
     return 0;
}