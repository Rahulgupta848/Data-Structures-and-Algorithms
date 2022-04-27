arr=[[1,5,7],
     [5,8,4],
     [3,2,9],
     [1,2,4]]
colors=[0,1,2]
def solve(arr,colors,house,color,cost):
     if(house==len(arr)):
          return cost
     min=1000000
     for i in range(len(colors)):
          if(i!=color):
               ans=solve(arr,colors,house+1,colors[i],arr[house][i])
               if(ans<min):
                    min=ans

     return min+cost

ans=solve(arr,colors,0,len(colors),0)
print(ans)