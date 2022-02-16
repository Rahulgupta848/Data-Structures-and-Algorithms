def reverseString(s,i):
     if(i==len(s)):
          return
     reverseString(s,i=i+1)
     print(s[i],end='')
s='rahul'
reverseString(s,0)