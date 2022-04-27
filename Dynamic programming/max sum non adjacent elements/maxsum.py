arr=[5,10,10,100,5,6]
dp={}
def solvememo(arr,i,dp):
     if(i<0):
          return 0
     if(i in dp):
          return dp[i]
     opt1=arr[i]+solvememo(arr,i-2,dp)
     opt2=solvememo(arr,i-1,dp)
     ans=max(opt1,opt2)
     dp[i]=ans
     return ans

def solvetab(arr):
     oinc=arr[0]
     oexc=0
     for i in range(1,len(arr)):
          ninc=oexc+arr[i]
          nexc=max(oexc,oinc)

          oinc=ninc
          oexc=nexc
     print(max(oinc,oexc))


solvetab(arr)
