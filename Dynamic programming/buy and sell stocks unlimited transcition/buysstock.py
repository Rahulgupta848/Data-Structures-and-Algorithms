arr= [23, 13, 25, 29, 33, 19, 34, 45, 65, 67]
ans=[]
sell=0
buy=0
for i in range(1,len(arr)):
     if(arr[i]>=arr[sell]):
          sell=i

     elif(arr[i]<arr[sell]):
          if(arr[sell]==arr[buy]):
               sell=i
               buy=i
          else:
               ans.append((buy,sell))
               sell=i
               buy=i
     if(i==len(arr)-1 and sell!=buy):
          ans.append((buy,sell))
for i in ans:
     a=i[0]
     b=i[1]
     print(i,sep=' ',end=' ')