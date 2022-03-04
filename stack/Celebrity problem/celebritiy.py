def celebrity(self, M, n):
     def knows(M,a,b):
          if(M[a][b]==1):
               return True
          else:
               return False
                       
     def checkRow(M,celeb,n):
          count=0
          for i in range(n):
               if(M[celeb][i]==0):
                    count+=1
          if(count==n):
               return True
          else:
               return False

     def checkColumn(M,celeb,n):
          count=0
          for i in range(n):
               if(M[i][celeb]==1):
                    count+=1
          if(count==n-1):
               return True
          else:
               return False
               
               
     stack=[]
     for i in range(n):
          stack.append(i)
     while(len(stack)>1):
          a=stack.pop()
          b=stack.pop()
          if(knows(M,a,b)):
               stack.append(b)
          else:
               stack.append(a)
     ans=stack.pop()
     rcheck=checkRow(M,ans,n)
     ccheck=checkColumn(M,ans,n)
     if(rcheck==True and ccheck==True):
          return ans
     else:
          return -1