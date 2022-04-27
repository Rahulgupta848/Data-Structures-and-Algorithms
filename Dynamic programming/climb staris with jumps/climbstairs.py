arr=[3,3,0,2,1,2,4,2,0,0]
dp=[]
for i in range(len(arr)+1):
     dp.append(0)

def climbstairsmemo(arr,i,dp):
     if(i>=len(arr)):
          return 1
     if(arr[i]==0):
          return 0
     if(dp[i]>0):
          return dp[i]
     ans=0
     for j in range(1,arr[i]+1):
          ans+=climbstairsmemo(arr,i+j,dp)
     dp[i]=ans
     return ans

def climbstairstab(arr):
     dp=[]
     for i in range(len(arr)+1):
            dp.append(0)
     dp[len(arr)]=1
     for i in range(len(arr)-1,-1,-1): 
          print(i)
          for j in range(1,arr[i]+1):
               if(i+j < len(arr) ):
                    dp[i]+=dp[i+j]
     print(dp)

climbstairstab(arr)