arr=[2,5,9,3,1,12,6,8,7]
stack=[]
ans=[]
for i in range(len(arr)):
     ans.append(-1)
for i in range(len(arr)):
     if(len(stack)==0):
          ans[i]=i+1
          stack.append([arr[i],i])
     elif(arr[i]>stack[-1][0]):
          while(len(stack)>0 and stack[-1][0]<arr[i]):
               stack.pop()
          if(len(stack)>0):
               ans[i]=i-stack[-1][1]
          else:
               ans[i]=i+1
          stack.append([arr[i],i])
     else:
          ans[i]=i-stack[-1][1]
          stack.append([arr[i],i])
print(ans)
     


