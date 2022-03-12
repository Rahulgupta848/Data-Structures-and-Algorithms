str='AECADEFG'
h={'A':0,'E':0,'I':0,'O':0,'U':0}
k=4

count=0
for i in range(k):
     if(str[i]=='A' or str[i]=='E'or str[i]=='I'or str[i]=='O'or str[i]=='U'):
          h[str[i]]+=1
          if(h[str[i]]==1):
               count+=1

print(count)
i=0
j=k
while(j!=len(str)):
     if(str[i]=='A' or str[i]=='E'or str[i]=='I'or str[i]=='O'or str[i]=='U'):
          h[str[i]]-=1
          if(h[str[i]]==0):
               count-=1
     if(str[j]=='A' or str[j]=='E'or str[j]=='I'or str[j]=='O'or str[j]=='U'):
          h[str[j]]+=1
          if(h[str[j]]==1):
               count+=1
     i+=1
     j+=1
    
     print(count)


