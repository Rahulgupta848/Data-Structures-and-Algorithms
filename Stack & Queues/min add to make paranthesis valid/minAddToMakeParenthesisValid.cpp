// 1: Given a string S of '(' and ')' parentheses.
// 2: You need to find count of minimum number of parentheses '(' or ')' 
//      when added in any positions so that the resulting parentheses string is valid.

//      e.g.1 string = ')()'
//           ans-> 1 
//           :-by adding one opening bracket at position 0  the string becomes valid "()()"
     
//      e.g.2 string = ""
//           ans ->0
//           :-empty string is already valid string

// solution :- 1.push only opening brackets in stack
//             2.when closing bracket is encountered pop the top if top element is opening bracket in stack
//             3.if closing bracket is encountered and stack is empty which means opening bracket
//                 is missing for current closing bracket increment counter.
//             4.if enteire string is traversed and still there are opening bracketes remaining in stack which means
//                 closing brackets are missing for those opening brackets present in stack. thus increment the couter by stack size.


#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int minAddToMakeParenthesisValid(string str){
     int counter = 0;
     stack <char> s;
     for(int i = 0;i<str.length();i++)    {
          if(str[i] == '('){
               s.push(str[i]);
          }else{
               if(!s.empty() && s.top() == '('){
                    s.pop();
               }else{
                    counter++;
               }
          }
     }
     if(!s.empty()){
          counter += s.size();
     }

     return counter;
}

int main(){
     string str1 = "()))((";
     string str2 = "()()";
     string str3 = ")()";
     string str4 = "";

     cout<<minAddToMakeParenthesisValid(str1)<<endl;
     cout<<minAddToMakeParenthesisValid(str2)<<endl;
     cout<<minAddToMakeParenthesisValid(str3)<<endl;
     cout<<minAddToMakeParenthesisValid(str4)<<endl;
     return 0 ;
}