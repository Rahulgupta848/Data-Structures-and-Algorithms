def soln(stack,string):
     for i in string:
          if(i==')'):
               if(stack[-1]=='('):
                    return True
               else:
                    while(stack[-1]!='('):
                         stack.pop()
                    stack.pop()
          else:
               stack.append(i)
     return False

stack=[]
string='((a+b)+(a-b))'
ans=soln(stack,string)
if(ans):
     print('duplicate ')
else:
     print('not duplicate')
