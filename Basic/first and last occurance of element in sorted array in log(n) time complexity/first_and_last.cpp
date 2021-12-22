/*
Find first and last occurance of element in O(log(n)).
    Solutin:
        step1.Array must be in sorted order.
        step2.Divide the question in two parts,first find first occurance and then last.
        step3.Use binary search to find element and store its index.
        step4.Once element found store index and shift the binary end positions.
        step5.Return the answer.return -1 if element not found.
Time Complexity:O(log(n)).
*/
#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int key)
{
    int f=0,l=n;
    int ans=-1;
    int mid=f+(l-f)/2;
    while(f<=l)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            l=mid-1;
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
        mid=f+(l-f)/2;
    }
    return ans;
}

int last(int arr[],int n,int key)
{
    int f=0,l=n;
    int ans=-1;
    int mid=f+(l-f)/2;
    while(f<=l)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            f=mid+1;
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
        mid=f+(l-f)/2;
    }
    return ans;
}
int main()
{
    int n=11;
    int arr[n]={1,2,3,3,3,3,3,3,3,5,6};
    int key=3;
    cout<<"first occurance of "<<key<<" is "<<"at index "<<first(arr,n,key)<<endl;
    cout<<"last occurance of "<<key<<" is "<<"at index "<<last(arr,n,key)<<endl;

}