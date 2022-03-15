class Node:
     def __init__(self,data):
          self.data=data
          self.child=[]
root=None


def genericTree():
     arr=[10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1]
     stack=[]
     root=None
     for i in range(len(arr)):
          if(arr[i]==-1):
               stack.pop()
          else:
               newnode=Node(arr[i])
               if(len(stack)==0):
                    root=newnode
               else:
                    stack[-1].child.append(newnode)
               stack.append(newnode)

     def rootPath(root,n):
          if(root.data==n):
               ans=[]
               ans.append(n)
               return ans
          for i in root.child:
               arr=rootPath(i,n)
               if(len(arr)>0):
                    arr.append(root.data)
                    return arr
          d=[]
          return d
     def lowestCommonAncestor(root,d1,d2):
          l1=rootPath(root,d1)
          l2=rootPath(root,d2)
          i=len(l1)-1
          j=len(l2)-1
          while(i>0 and j>0 and l1[i]==l2[j]):
               i-=1
               j-=1
          print(l1[i+1])
     lowestCommonAncestor(root,70,110)
genericTree()