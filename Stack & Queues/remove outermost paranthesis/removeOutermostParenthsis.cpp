// 1. You are given a valid parentheses string in form of A+B+C... where A, B and C are valid primitive strings.
// 2. A primitive string is a valid parentheses string which cant is split in s = x+y, with x and y nonempty valid parentheses strings.
// 3. You have to remove the outermost parentheses from all primitive strings.

// Example 1 "(()())(())" = "(()())" + "(())".
// removing outermost parentheses from "(()())" and "(())" will result in ()()().

// e.g.2  "((())(()())())" ---> ()()()()
// e.g.3  "(())"  ---> ()
// e.g.4  "()()"  ---> ()()

// solution:-
//      1.when upcoming current element is opening bracket push in stack only when top of stack is not a opening bracket
//      2.when upcoming current element is closing bracket pop top element if it is opening bracket and stack is not empty
//           and append () in answer string

#include<iostream>
#include<stack>
using namespace std;

string removeOuterMostParenthesis(string str){
     string ans = "";
     stack<char> s;
     for (int i=0;i<str.length();i++){
          if(str[i] == '('){
               if(s.empty() || s.top() != '('){
                    s.push(str[i]);
               }
          }else{
               if(!s.empty() && s.top()=='('){
                    ans += "()";
                    s.pop();
               }
          }
     }
     return ans;
}

int main(){
     string str1 = "((())(()())())";
     string str2 = "(()())(())";
     string str3 = "(())";
     string str4 = "()()";

     cout<<removeOuterMostParenthesis(str1)<<endl;
     cout<<removeOuterMostParenthesis(str2)<<endl;
     cout<<removeOuterMostParenthesis(str3)<<endl;
     cout<<removeOuterMostParenthesis(str4)<<endl;
}