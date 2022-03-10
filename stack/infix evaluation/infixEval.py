def precedence(operator):
     if(operator=='+' or operator=='-'):
          return 1
     elif(operator=='*' or operator=='/'):
          return 2

def solve(v1,v2,operator):
     if(operator=='+'):
          return v1+v2
     elif(operator=='-'):
          return v2-v1
     elif(operator=='*'):
          return v1*v2
     elif(operator=='/'):
          return v2//v1

def main():
     str='4+6*2-(8/2+2)'
     nums=[]
     signs=[]
     for i in str:
          if(i=='('):
               signs.append(i)
          elif(i==')'):
               while(signs[-1]!='('):
                    operator=signs.pop()
                    v1=nums.pop()
                    v2=nums.pop()
                    ans=solve(v1,v2,operator)
                    nums.append(ans)
               signs.pop()
          elif(i=='+' or i=='-' or i=='*' or i=='/'):
               while(len(signs)>0 and signs[-1]!='(' and   precedence(i)<=precedence(signs[-1])   ):
                    operator=signs.pop()
                    v1=nums.pop()
                    v2=nums.pop()
                    ans=solve(v1,v2,operator)
                    nums.append(ans)
               signs.append(i)
          elif(i.isdigit()):
               nums.append(int(i))
     
     while(len(signs)!=0):
          operator=signs.pop()
          v1=nums.pop()
          v2=nums.pop()
          ans=solve(v1,v2,operator)
          nums.append(ans)
     print(nums[-1])

if __name__ == '__main__':
     main()