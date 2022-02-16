def binarySearch(arr,l,r,mid,val):
     if(arr[mid]==val):
          return mid
     if(arr[mid]>val):
          r=mid
          mid=l+(r-l)//2
          return binarySearch(arr,l,r,mid,val)
     else:
          l=mid
          mid=l+(r-l)//2
          return binarySearch(arr,l,r,mid,val)
arr=[0,1,2,3,4,5,6,7,8,9,10]
l=0
r=len(arr)-1
mid=l+(r-l)//2
val=10
ans=binarySearch(arr,l,r,mid,val)
print(ans)
