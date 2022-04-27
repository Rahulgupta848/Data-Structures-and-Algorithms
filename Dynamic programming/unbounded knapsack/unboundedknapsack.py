weights=[2,5,1,3,4]
values=[15,4,10,45,30]
cap=7
count=0
dp={}
def unboundedknapsack(weights,values,cap,sum,dp):
     if(cap==0):
          dp[cap]=sum
          return sum
     if(cap in dp):
          return dp[cap]
     global count
     m=-10**5
     for i in range(len(values)):
          count+=1
          if(cap-weights[i]>=0):
               ans=unboundedknapsack(weights,values,cap-weights[i],sum+values[i],dp)
               if(ans>m):
                    m=ans
     dp[cap]=m
     return m
print(unboundedknapsack(weights,values,cap,0,dp))
print(count)