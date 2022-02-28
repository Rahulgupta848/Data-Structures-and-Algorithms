arr=[3,2,7,1,9,11,2]
ans=[]
stack=[-1]
for i in range(len(arr)):
     ans.append(-1)
for i in range(len(arr)):
     while(len(stack)>1 and arr[i]>stack[-1]):
          stack.pop()
     ans[i]=stack[-1]
     stack.append(arr[i])
print(ans)
