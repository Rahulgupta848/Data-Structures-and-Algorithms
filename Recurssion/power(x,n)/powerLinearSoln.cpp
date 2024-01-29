// find the power of given vairable such that x^n linear solution.

#include<iostream>
using namespace std;

int powerLinear(int x,int n){
     if(n == 0){
          return 1;
     }
     return x*powerLinear(x, n-1);
}

int main(){
     int x = 2;
     int n = 5;

     cout<<powerLinear(x,n);
     return 0;
}