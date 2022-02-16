def linearSearch(arr,n,i):
     if(i==len(arr)):
          return -1
     if(arr[i]==n):
          return i
     return linearSearch(arr,n,i=i+1)
arr=[1,2,3,4,5,6,7,8]
print(linearSearch(arr,8,0))
