arr1=[-1,4,25,8,1,-77,34,82,2,0]
arr=[1,2,4,5]
n=6
def sort(arr,n):
     if(len(arr)==0):
          arr.append(n)
          return 
     if(arr[-1]<n):
          arr.append(n)
     else:
          t=arr.pop()
          sort(arr,n)
          arr.append(t)
     return 
def sortstack(arr1):
     if(len(arr1)==0):
          return
     top=arr1.pop()
     sortstack(arr1)
     sort(arr1,top)
     return

sortstack(arr1)
print(arr1)