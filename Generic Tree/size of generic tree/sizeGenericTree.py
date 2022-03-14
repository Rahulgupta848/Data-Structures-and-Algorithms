class Node:
     def __init__(self,data):
          self.data=data
          self.child=[]
root=None

#iterative solution
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


     def size(root):
          ans=1
          if(len(root.child)==0):
               return 1
          for i in root.child:
               ans+=size(i)
          return ans

     print('size=',size(root))
     
genericTree()