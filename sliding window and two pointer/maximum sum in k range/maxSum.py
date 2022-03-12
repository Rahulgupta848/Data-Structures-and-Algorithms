arr=[3,6,8,1,12,4,9,34,97,2,5,3,6]
k=4
sum=0
for i in range(k):
     sum+=arr[i]
i=0
j=k
print(sum)
while(j!=len(arr)):
     sum+=arr[j]
     sum-=arr[i]
     print(sum)
     i+=1
     j+=1

