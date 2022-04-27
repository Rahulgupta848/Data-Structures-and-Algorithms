
dp={}
def fabomemo(n):
     if(n==1 or n==2):
          return 1
     if(n in dp):
          return dp[n]

     dp[n]= fabomemo(n-1) + fabomemo(n-2)
     return dp[n]

def fabotab(n):
     a=0
     b=1
     if(n==0):
          print(a)
     elif(n==1 ):
          print(b)
     else:
          sum=0
          for i in range(2,n+1):
               sum=a+b
               a=b
               b=sum
          print(sum)

fabotab(1)