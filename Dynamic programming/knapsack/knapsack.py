values=[20,30,10,50]
weights=[1,3,4,6]
cap=10

def knapsack(values,weights,cap,wsum,vsum,idx):
     if(wsum==cap):
          return vsum
     if(idx==len(values)):
          return 0
     ans1=knapsack(values,weights,cap,wsum + weights[idx],vsum + values[idx],idx+1)
     ans2=knapsack(values,weights,cap,wsum,vsum,idx+1)
     fans=max(ans1,ans2)
     return fans

def DP(values,weights,cap):
     arr=[]
     for i in range(len(weights)+1):
          a=[]
          for j in range(cap+1):
               if(i==0 or j==0):
                    a.append(0)
               else:
                    a.append(None)
          arr.append(a)
     return arr

def knapsackdp(values,weights,cap):
     dp=DP(values,weights,cap)
     for i in range(1,len(dp)):
          for j in range(1,len(dp[0])):
               if(j<weights[i-1]) :
                    dp[i][j]=dp[i-1][j]
               else:
                    dp[i][j]=max(dp[i-1][j],values[i-1]+dp[i-1][j-weights[i-1]])
          
     print(dp[-1][-1])
knapsackdp(values,weights,cap)