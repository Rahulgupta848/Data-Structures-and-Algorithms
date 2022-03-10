#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class queue
{
     int front=0;
     int rear=0;
     int size;
     int *arr;

     public:
     queue(int s)
     {
          size=s;
          arr=new int [size];
     }

     void push(int data)
     {
          if(rear==front)
          {
               rear=0;
               front=0;
          }
          if(rear==size-1)
          {
               cout<<"queue is full"<<endl;
          }
          else
          {
               arr[rear];
               rear++;
          }
     }

     void pop()
     {
          if(rear==front)
          {
               cout<<"queue is empty"<<endl;
          }
          else
          {
               arr[front]=-1;
               front++;
          }
     }

};