/*
Merge two sorted arrays.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4 ,m=4;
    int a[n]={1,10,11,44};
    int b[m]={7,15,59,100};
    vector<int>v;
    int i=0,j=0;
    while(v.size()!=(m+n))
    {
        if(a[i]<b[j] && i<n && j<m)
        {
            v.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j] && i<n && j<m)
        {
            v.push_back(b[j]);
            j++;
        }
        else if(i==n && j<m)
        {
            v.push_back(b[j]);
            j++;
        }
        else{
            v.push_back(a[i]);
            i++;
        }
    }
    for(int ans:v)
    {
        cout<<ans<<endl;
    }
    return 0;
}