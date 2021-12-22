#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[],int n,int key)
{
    /*
    Linear Search.
    Time Complexity:O(n).
    */
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"key found in linear search at position "<<i+1<<endl;
            return;
        }
    }
    cout<<"key not found in linear search"<<endl;
}

void binary_search(int arr[],int n,int key)
{
    /*
    Binary Search.
    -->In order to perform binary search array must be sorted in increasing or decreasing order.
    Time Complexity:O(log(n)).
    */
   int f=0,l=n;
   int m=f+(l-f)/2;
   while(f<=l)
   {
        if(arr[m]==key)
        {
            cout<<"key found in binary search at position "<< m+1<<endl;
            return;
        }
        if(arr[m]>key)
        {
            f=f;
            l=m-1;
            m=f+(l-f)/2;
        }
        else{
            f=m+1;
            l=l;
            m=f+(l-f)/2;
        }
   }
   cout<<"key not found in binary search"<<endl;
}
int main()
{
    int arr[10]={8,12,26,36,41,55,69,72,84,100};
    int key;
    cout<<"enter the key : ";
    cin>>key;
    linear_search(arr,10,key);
    binary_search(arr,10,key);
    return 0;
}