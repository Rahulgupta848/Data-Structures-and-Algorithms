// 1. You are given a string exp representing an expression.
// 2. Assume that the expression is balanced  i.e. the opening and closing brackets match with each other.
// 3. But, some of the pair of brackets maybe extra/needless. 
// 4. You are required to print true if you detect extra brackets and false otherwise.

// e.g.'
// ((a + b) + (c + d)) -> false
// (a + b) + ((c + d)) -> true'

// solution:-
//      1.iterate through string and push elements in stack if el is openeing bracket or operator or operands
//      2.if el is closing bracket keep poping till found opening bracket in stack if opening brancket found directly then return true.
//      3.if iteration is completed and still elements are remainging in stack then reutrn true.


#include<iostream>
#include<stack>
using namespace std;

bool findDuplicateBrackets(string str){
     stack<char> s;
     for(int i = 0;i<str.length();i++){
          char ch = str[i];
          if(ch == '('){
               s.push(ch);
          } else if( ch == ')'){
               if(s.top() == '('){
                    return true;
               }else{
                    while(!s.empty() && s.top() != '('){
                         s.pop();
                    }
                    s.pop();
               }
          } else{
               s.push(ch);
          }
     }
     if(!s.empty()){
          return true;
     }
     return false;
}    

int main(){

     string str1 = "((a+b)+(c+d))";
     string str2 = "(a+b)+((c+d))";

     cout<<findDuplicateBrackets(str1)<<endl;
     cout<<findDuplicateBrackets(str2)<<endl;

     return 0;
}