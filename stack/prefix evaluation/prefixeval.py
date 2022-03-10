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
     str='+5*32'
     nums=[]
     for i in range(len(str)-1,-1,-1):
          if(str[i].isdigit()):
               nums.append(int(str[i]))
          elif(str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/'):
               operator=str[i]
               v1=nums.pop()
               v2=nums.pop()
               ans=solve(v1,v2,operator)
               nums.append(ans)
     print(nums[-1])

if __name__ =='__main__':
     main()