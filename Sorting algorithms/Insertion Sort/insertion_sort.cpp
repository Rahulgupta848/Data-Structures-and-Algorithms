/*
Insertion sort.
Time complexity : Worst case=O(n)^2 ,Best case=O(n).
*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n=6;
    int arr[n]={6,3,4,5,2,1};
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i:arr)
    {
        cout<<i<<endl;
    }
    return 0;
}