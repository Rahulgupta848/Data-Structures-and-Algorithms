arr=[1,2,3,4,5]
count=0
def targetsum(arr,sum,idx,set,tar):
     global count
     count+=1
     if(idx==len(arr)):
          if(sum==tar):
               print(set)
          return
     targetsum(arr,sum+arr[idx],idx+1,set+str(arr[idx]),tar)
     targetsum(arr,sum,idx+1,set,tar)
 
targetsum(arr,0,0,'',7)
print(count)