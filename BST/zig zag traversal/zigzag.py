class Node:
     def __init__(self,data):
          self.data=data
          self.left=None
          self.right=None

root=None
def Tree():
     stack=[]
     global root
     arr=[50,20,5,-1,15,-1,-1,30,14,-1,16,9,-1,-1,-1,-1]
     for i in range(len(arr)):
          if(arr[i]==-1):
               stack.pop()
          else:
               newnode=Node(arr[i])
               if(root==None):
                    root=newnode
               else:
                    if(stack[-1].left==None):
                         stack[-1].left=newnode
                    else:
                         stack[-1].right=newnode
               stack.append(newnode)
     zigzag(root)
def zigzag(root):
     q=[root]
     ans=[]
     flag=False
     while(len(q)!=0):
          size=len(q)
          vans=[]
          for i in range(size): 
               el=q.pop(0)
               if(flag==True):
                    vans.insert(0,el.data)
               else:
                    vans.append(el.data)
               if(el.left):
                    q.append(el.left)
               if(el.right):
                    q.append(el.right)
          while(len(vans)!=0):
               d=vans.pop(0)
               ans.append(d)
          if(flag==True):
               flag=False
          else:
               flag=True
     print(ans)
Tree()

        
 