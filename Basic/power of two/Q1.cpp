/*
Power of two.
Solution:
    step1:Any number power of two has only one "1" in its binary representaion.
    step2:Taking bitwise & of the number with one number less,will return 0.
    step3:check the state of output and print the answer true or false.
Time Complexitiy: O(1).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if((n&n-1)==0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}