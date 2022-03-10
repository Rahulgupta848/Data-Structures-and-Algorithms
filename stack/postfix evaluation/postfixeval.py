def solve(v1,v2,operator):
     if(operator=='+'):
          return v2+v1
     elif(operator=='-'):
          return v2-v1
     elif(operator=='/'):
          return v2/v1
     elif(operator=='*'):
          return v2*v1

def main():
     str='532*+'
     nums=[]
     for i in str:
          if(i.isdigit()):
               nums.append(int(i))
          elif(i=='+' or i=='-' or i=='*' or i=='/'):
               operator=i
               v1=nums.pop()
               v2=nums.pop()
               ans=solve(v1,v2,operator)
               nums.append(ans)
     print(nums[-1])

if __name__ =='__main__':
     main()