def nextSmaller(arr):
     stack=[-1]
     ans=[]
     for i in range(len(arr)):
          ans.append(-1)
     for i in range(len(arr)-1,-1,-1):
          while(stack[-1]!=-1 and arr[i]<arr[stack[-1]]):
               stack.pop()
          ans[i]=stack[-1]
          stack.append(i)
     return ans

def previousSmaller(arr):
     stack=[-1]
     ans=[]
     for i in range(len(arr)):
          ans.append(-1)
     for i in range(len(arr)):
          while(stack[-1]!=-1 and arr[i]<arr[stack[-1]]):
               stack.pop()
          ans[i]=stack[-1]
          stack.append(i)
     return ans

arr=[2,1,5,6,2,3]
next=nextSmaller(arr)
prev=previousSmaller(arr)
max=0
print('next=',next)
print('previous=',prev)
for i in range(len(arr)):
     l=arr[i]
     b=next[i]-prev[i]-1
     area=l*b
     if area>max:
          max=area
print(max) 