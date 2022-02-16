// [binary search]
// find the element in Rotated and sorted array.
// Time complexity:O(log(n)).

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={7,8,9,2,3,4};
    int k=4;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    int pivot=s;
    if(k>arr[0])
    {
        s=0;
        e=pivot-1;
    }
    else{
        s=pivot;
        e=n-1;
    }

    mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    return 0;
}