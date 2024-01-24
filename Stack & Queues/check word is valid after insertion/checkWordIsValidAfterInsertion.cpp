// yor are given a string determine if it is valid or not
// a valid string is a string that can be created by inserting abc at any index any number of time.

// e.g.1 aabcbc ---> true 

#include<iostream>
#include<stack>
using namespace std;

string validateString(string str){
     stack<char> s;
     for(int i=0;i<str.length();i++){
          char ch = str[i];
          s.push(ch);
          if(ch == 'c' && s.size()>= 3){
               string newStr = "";
               for(int i=0;i<3;i++){
                    newStr = s.top() + newStr;
                    s.pop();
               }
               if(newStr != "abc"){
                    for(int i=0;i<3;i++){
                         s.push(newStr[i]);
                    }
               }
          }
     }
     if(s.empty()){
          return "Valid";
     }else{
          return "Invalid";
     }
}

int main(){
     string str1 = "aabcbc";
     string str2 = "abcabcabaaabcc";
     string str3 = "abcabcababcc";
     string str4 = "abccba";
     
     cout<<validateString(str1)<<endl;
     cout<<validateString(str2)<<endl;
     cout<<validateString(str3)<<endl;
     cout<<validateString(str4)<<endl;
     return 0;
}
