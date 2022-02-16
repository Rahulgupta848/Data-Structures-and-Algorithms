c=[3,8,8,7,1]
s=[1,1,1,1,1]
m=3
sum=0
for i in range(m):
     sum+=c[i]

for i in range(m,len(s)):
     if(s[i]==0):
          sum+=c[i]

max=sum
i=1
j=m
while(j<len(s)):
     if(s[j]==1):
          sum+=c[j]
     if(s[i-1]==1):
          sum-=c[i-1]
     i+=1
     j+=1
     if(sum>max):
          max=sum

print(max)
