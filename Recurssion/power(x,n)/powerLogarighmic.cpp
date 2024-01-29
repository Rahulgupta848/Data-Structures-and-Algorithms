// find the power of given vairable such that x^n logarithmic solution.
// Observation :- x^n = x^n/2  * x^n/2
//      which means if we find x^n/2 we only iterate half the entire linear iteration

#include<iostream>
using namespace std;

int powerLogarithmic(int x, int n){
     if(n ==0){
          return 1;
     }

     int halvedPower = powerLogarithmic(x,n/2);
     int fullPower = halvedPower * halvedPower;

     if(n % 2 == 1){
          fullPower = fullPower * x;
     }

     return fullPower;
}

int main(){
     int x = 2;
     int n = 6;

     cout<<powerLogarithmic(x,n);
     return 0;
}
