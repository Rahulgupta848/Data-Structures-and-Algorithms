arr=[]
size=10
k=3
top=[]
next=[]
free=0
i=0
count=size
for i in range(size):
     arr.append(None)

for i in range(1,size+1):
     next.append(i)

for i in range(k):
     top.append(-1)

def push(data,stack):
     global arr,top,next,free,i,count,size
     if(count<1):
          print('stack overflow')
     else:
          i=free
          free=next[i]
          next[i]=top[stack]
          top[stack]=i
          arr[i]=data
          count-=1

def pop(stack):
     global arr,top,next,free,i,count,size
     if(top[stack]==-1):
          print('stack is empty')
     else:
          i=top[stack]
          top[stack]=next[i]
          next[i]=free
          free=i
          count+=1
          print(arr[i])

push(100,1)
push(200,1)
push(300,1)
push(50,0)
push(60,0)
pop(1)