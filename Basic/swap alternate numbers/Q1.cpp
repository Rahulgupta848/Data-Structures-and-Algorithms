/*
Swap alternate numbers in Array.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int j=0;
    while(j<=n)
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        j+=2;
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}