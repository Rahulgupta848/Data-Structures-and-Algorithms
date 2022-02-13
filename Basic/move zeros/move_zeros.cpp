#include<bits/stdc++.h>
using namespace std;
void soln(vector<int>&v)
{
    int i=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j]!=0);
        {
            int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
        }
    }
   
}
int main()
{
    // vector<int>v={0,1,2,4,0,3,5,6,7,0,0};
    vector<int>v={0,1,0,3,12};
    // vector<int>ans=soln(v);
    soln(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}