/*
Find intersection of two sorted (smaller-->bigger) arrays.

Soln:-
    step1:Keep trackers on both the arrays as i and j which constantly iterate on the arrays.
    step2:If current tracked elements in Array1 is smaller than Array2 increament the 
          tracker on Array1 i.e i.
    step3:If both the elements are same,print the elements and increament both the trackers.
    step4:If current tracked elements in Array1 is greater than Array2 increament the tracker 
          on Array2 i.e j.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,2,3,3};
    int n=6,m=4;
    int i=0,j=0;
    while(i!=n && j!=m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }
    return 0;
}