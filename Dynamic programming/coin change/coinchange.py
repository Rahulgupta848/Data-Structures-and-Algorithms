arr=[1,5,7]
sum=18
count=0
dp={0:0}
def coinchange(arr,sum,dp):
     global count
     if(sum == 0):
          return 0
     if(sum in dp):
          return dp[sum]
     fans=10**5
     for i in arr:
          if(sum-i)>=0:
               count+=1
               ans=coinchange(arr,sum-i,dp)
               if(ans+1 < fans):
                    fans=ans+1
     dp[sum]=fans
     return fans
print(coinchange(arr,sum,dp))
print(count)
print(dp)
