/*[binary Search]
Total occurances in sorted array
Solution: 
    step1:Calculate the first and last occurance of element in sorted array using binary Search.
    step2.Calculate the ans=l-f+1;
Time Complexity:O(log(n));                               

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
    int ans=last(arr,n,key)-first(arr,n,key)+1;
    cout<<"number of occurances of "<<key<<" are "<<ans<<endl;
    return 0;
}