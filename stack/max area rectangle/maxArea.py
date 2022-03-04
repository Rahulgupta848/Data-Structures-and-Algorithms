def nextsmaller(arr):
     stack=[-1]
     ans=[]
     for i in range(len(arr)):
          ans.append(-1)
     for i in range(len(arr)-1,-1,-1):
          while(arr[stack[-1]]>=arr[i] and stack[-1]!=-1):
               stack.pop()
          if(stack[-1]==-1):
               ans[i]=len(arr)
          else:
               ans[i]=stack[-1]
          stack.append(i)
     return ans


def prevsmaller(arr):
     stack=[-1]
     ans=[]
     for i in range(len(arr)):
          ans.append(-1)
     for i in range(len(arr)):
          while(arr[stack[-1]]>arr[i] and stack[-1]!=-1):
               stack.pop()
          ans[i]=stack[-1]
          stack.append(i)
     return ans     


def histogram(arr):
     next=nextsmaller(arr)
     prev=prevsmaller(arr)
     max=-1000000000
     for i in range(len(arr)):
          l=arr[i]
          b=next[i]-prev[i]-1
          area=l*b
          if(area>max):
               max=area
     return max

arr=[[0,1,1,0],[1,1,1,1],[1,1,1,1],[1,1,0,0]]
test=arr[0]
maxarea=histogram(test)
for i in range(1,len(arr)):
     sample=arr[i]
     for j in range(len(sample)):
          if(sample[j]==1):
               test[j]+=1
          else:
               test[j]=0
     area=histogram(test)
     if(area>maxarea):
          maxarea=area
print(maxarea)