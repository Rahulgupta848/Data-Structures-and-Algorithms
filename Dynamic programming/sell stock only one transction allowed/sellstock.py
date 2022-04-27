arr=[11,6,7,19,4,1,6,18,4]
maxp=0
dp=arr[0]
for i in range(1,len(arr)):
     dp=min(dp,arr[i])
     p=arr[i]-dp
     maxp=max(p,maxp)
print(maxp)