/*[bit manipulation]
Find Unique Element
Solution:-
    step1:Taking bitwise XOR of all elements in the array it will cancel out all duplicate 
          numbers and unique element will be left out.
    step2:Print out the left number
Overall Time Complexity:O(n).
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={2,1,1,7,2};
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}