arr1=[1,2,3,4]
arr2=[6]
n1=0
n2=0
p1=len(arr1)-1
p2=len(arr2)-1
for i in range(len(arr1)):
    n1=n1+arr1[i]*(10**p1)
    p1-=1
for i in range(len(arr2)):
    n2=n2+arr2[i]*(10**p2)
    p2-=1
ans=n1+n2
fans=[]
while(ans!=0):
    m=ans%10
    fans.insert(0,m)
    ans=ans//10
print(fans)