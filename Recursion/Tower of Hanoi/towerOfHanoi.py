def toh(n,a,b,c):
     if(n==0):
          return
     toh(n-1,a,c,b)
     print(n,'[',a,'->',b,']')
     toh(n-1,c,b,a)
toh(3,'a','b','c')
