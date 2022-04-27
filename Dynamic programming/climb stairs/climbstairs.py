arr=[3,3,0,2,1,2,4,2,0,0]
dp={}
def climbstairsmemo(n,dp):
     if(n==0):
          return 1
     if(n<0):
          return 0
     if(n in dp):
          return dp[n]
     ans1=climbstairsmemo(n-1,dp)
     ans2=climbstairsmemo(n-2,dp)
     ans3=climbstairsmemo(n-3,dp)
     ans=ans1+ans2+ans3
     dp[n]=ans
     return ans


def climbstairstab(n):
     dp=[]
     for i in range(n+1):
          dp.append(0)
     dp[0]=1
     for i in range(1,n+1):
          if(i==1):
               dp[i]=dp[0]
          if(i==2):
               dp[i]=dp[i-1]+dp[i-2]
          else:
               dp[i]=dp[i-1]+dp[i-2]+dp[i-3]
     print(dp[n])
               

climbstairstab(5)