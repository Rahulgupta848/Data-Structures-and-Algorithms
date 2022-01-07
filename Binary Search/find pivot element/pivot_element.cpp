#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int arr[n]={8,10,17,1};
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;    
        }
        mid=s+(e-s)/2;
    }
    cout<<s<<endl;
}