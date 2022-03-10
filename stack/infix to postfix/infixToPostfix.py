def precedence(operator):
     if(operator=='+' or operator=='-'):
          return 1
     elif(operator=='*' or operator=='/'):
          return 2
     elif(operator=='^'):
          return 3
def main():
     str='(a+b*c)/(x+y/2)'
     signs=[]
     ans=''
     for i in str:
          if(i=='('):
               signs.append(i)
          elif(i==')'):
               while(signs[-1]!='('):
                    val=signs.pop()
                    ans+=val
               signs.pop()
          elif(i=='+' or i=='-' or i=='/' or i=='*' or i=='^'):
               while(len(signs)>0 and signs[-1]!='(' and precedence(i)<=precedence(signs[-1])):
                    val=signs.pop()
                    ans+=val
               signs.append(i)
          else:
               ans+=i
     while(len(signs)!=0):
          val=signs.pop()
          ans+=val
     print(ans)
if __name__ =='__main__':
     main()