//leet code 442
/*
>>Find all duplicates in array.
length of array is n and the elements ranges from 1->n,each element occour once or twice
print the elements which occours twice.
Solution:-
    step1:create an array dp of size n+1 .
    step2:iterate through the orignal array and icreament the incices of dp with same occurance 
          in iteration.
    step3:iterate the dp and print the incices with 2 as a value.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,3,1,4,2,5};
    int dp[8]={0};
    for(int i=0;i<7;i++)
    {
        dp[arr[i]]+=1;
    }
    for(int i=1;i<=7;i++)
    {
        if(dp[i]>1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}