#include<iostream>
using namespace std;

void printLexico(string ans,int n){
     if(ans != "" && stoi(ans) > n){
          return;
     }
     for (int i = 0; i < 10; i++) {
          string s = ans + to_string(i);
          int val = stoi(s);
          if(val > 0 && val <=n){
               cout<<val<<endl;
               printLexico(to_string(val),n);
          }
     }
}

int main(){
     int n = 100;
     printLexico("",n);
     return 0;
}