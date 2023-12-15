// 1. You are given a string exp representing an expression.
// 2. You are required to check if the expression is balanced i.e. closing brackets and opening brackets match up well.

// e.g.
// [(a + b) + {(c + d) * (e / f)}] -> true
// [(a + b) + {(c + d) * (e / f)]} -> false
// [(a + b) + {(c + d) * (e / f)} -> false
// ([(a + b) + {(c + d) * (e / f)}] -> false

// solution:-
//      1.iterate each character from string  --done
//      2.if its opening bracket or operands or operators => push inside the stack.
//      3. if closing bracket found pop the elements till opening bracket is found.
//      4. if the opening bracket found pairs up with the closing bracket ? pop it : return false.
//      5. if string is enirely iterated then check the stack is empty ? return true : return false.

#include<iostream>
#include<stack>
using namespace std;

bool isValidBracketPair(char currentChar, char topElement){
     bool ans = false;
     if(currentChar == ')' && topElement == '('){
         ans = true;
     }else if(currentChar == '}' && topElement == '{'){
          ans = true;
     }else if(currentChar == ']' && topElement == '['){
          ans = true;
     }
     return ans;
}

bool findBalancedBrackets(string str){
     stack<char> s;
     for (int i = 0;i<str.length(); i++){
          char currentChar = str[i];
          if(currentChar == ')' || currentChar =='}' || currentChar == ']'){
              while(s.top() != '(' && s.top() != '{'  &&  s.top() != '['){
                s.pop();
              }
              char topElement = s.top();
              bool result = isValidBracketPair(currentChar , topElement);
              if(!result){
               return false;
              }else{
               s.pop();
              }
          }else{
               s.push(currentChar);
          }
     }
     if(!s.empty()){
          return false;
     }
     return true;
}

int main(){
     string str1 = "[(a+b)+{(c+d)*(e/f)}]";
     string str2 = "[(a+b)+{(c+d)*(e/f)]}";
     string str3 = "[(a+b)+{(c+d)*(e/f)}";
     string str4 = "([(a+b)+{(c+d)*(e/f)}]";

     cout<<findBalancedBrackets(str1)<<endl;
     cout<<findBalancedBrackets(str2)<<endl;
     cout<<findBalancedBrackets(str3)<<endl;
     cout<<findBalancedBrackets(str4)<<endl;

     return 0;
}
