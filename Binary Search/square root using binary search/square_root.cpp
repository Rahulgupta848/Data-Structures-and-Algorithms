#include<bits/stdc++.h>
using namespace std;

long long int squrt(int k)
{
    int s=0;
    int e=k;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        long long square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        else if(square>k)
        {
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int k=37;
    cout<<squrt(k)<<endl;
    return 0;
}