arr=[2,1,4,3,9,10,7,8,2]
stack=[]
ans=[]
stack.append(-1)
for i in range(len(arr)):
     ans.append(-1)
for i in range(len(arr)-1,-1,-1):
     while(stack[-1]>=arr[i]):
          stack.pop()
     ans[i]=stack[-1]
     stack.append(arr[i])
print(ans)