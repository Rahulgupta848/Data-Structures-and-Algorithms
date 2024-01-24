// given a string str and positive integer k 
// string contains only numbers
// find smallest number that can be obtained after removing k characters from string

// e.g. "2134" k=2   ----> "13"

#include<iostream>
#include<stack>
#include<vector>
using namespace std;


//USING RECURSION
int getSmallestNumber(string str , int n){
     if(n == 0){
          return stoi(str);
     }
     int minNum = INT_MAX;
     for(int i = 0;i<str.size();i++){
          string dstr = str;
          dstr.erase(i,1);
          int ans = getSmallestNumber(dstr,n-1);
          minNum = min(minNum,ans);
     }
     return minNum;
}

int main(){
     string str1 = "2134";
     string str2 = "2314308";
     string str3 = "10200";

     cout<<getSmallestNumber(str1, 2)<<endl;
     cout<<getSmallestNumber(str2, 2)<<endl;
     cout<<getSmallestNumber(str3, 1)<<endl;
     return 0;
}