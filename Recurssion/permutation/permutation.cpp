#include<iostream>
using namespace std;

void getPermutation(string str,string ans){
     if(str.size()==0){
          return;
     }
     if(str.size() == 1){
          cout<<ans+str[0]<<endl;
          return;
     }
     for(int i=0;i<str.size();i++){
          char ch = str[i];
          string cloneStr = str;
          cloneStr.erase(i,1);
          getPermutation(cloneStr,ans+ch);
     }
}

int main(){
     string str = "abc";
     getPermutation(str,"");
     return 0;
}