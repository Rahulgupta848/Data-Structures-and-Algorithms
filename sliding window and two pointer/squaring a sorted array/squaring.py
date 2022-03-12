arr=[-8,-5,1,2,4,9]
i=0
j=len(arr)-1
while(i<=j):
     if(arr[i]**2 < arr[j]**2):
          print(arr[j]**2)
          j-=1
     else:
          print(arr[i]**2)
          i+=1

