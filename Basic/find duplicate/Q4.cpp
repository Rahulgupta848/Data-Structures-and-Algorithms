/*[bit manipulation]
Find duplicate.
Given an array of length n,there are n-1 numbers and one duplicate,find and print that duplicate.
Solution:-
    step1:iterate the array while taking the bitwise XOR of each element,
        the duplicate will be cancelled out.
    step2:Taking XOR with another array form 1 to n-1,it will cancell out all
         elements except the duplicate number.
    step3:print the left out number.
Overall Time Complexity:O(n).
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,2};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1;i<5;i++)
    {
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}