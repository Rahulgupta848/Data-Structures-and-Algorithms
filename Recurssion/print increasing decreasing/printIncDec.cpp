// given an integer print from 1 to n in increasing and decrising order using recursion.

#include<iostream>
using namespace std;

void printInc(int n,int crr){
     if(crr > n){
          return;
     }
     cout<<crr<<" ";
     printInc(n,crr+1);
}

void printDec(int n){
     if(n ==0){
          return;
     }
     cout<<n<<" ";
     printDec(n-1);
}

int main(){
     int n=5;
     printInc(n,1);
     cout<<endl;
     printDec(n);
     return 0;
}