stack=[]
string='[(a+b)+(a-c))'
def remove(stack,i):
     if(len(stack)==0):
          return False
     elif(stack[-1]!=i):
          return False
     else:
          a=stack.pop()
          return True
def unbalanced(stack,string):
     for i in string:
          if(i=='(' or i=='{'  or i=='['):
               stack.append(i)
          elif(i==')'):
               ans=remove(stack,'(')
               if(ans==False):
                    return False
          elif(i=='}'):
               ans=remove(stack,'{')
               if(ans==False):
                    return False
          elif(i==']'):
               ans=remove(stack,'[')
               if(ans==False):
                    return False
     if(len(stack)==0):
          return True
if(unbalanced(stack,string)):
     print('balanced')
else:
     print('unbalanced')