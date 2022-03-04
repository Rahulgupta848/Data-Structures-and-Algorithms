#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void insertAtBottom(stack<int> &s,int n,int ele)
{
     if(s.empty()){
          s.push(ele);
          return;
     }else{
     int t=s.top();
     s.pop();
     insertAtBottom(s,s.size(),ele);
     s.push(t);
     }
}

int main()
{
     stack<int>s;
     int j=5;
     for(int i=1;i<5;i++)
     {
          s.push(j*i);
     }

     insertAtBottom(s,s.size(),1);
     while(!s.empty()){
          cout<<s.top()<<endl;
          s.pop();
     }
     return 0;
}
