
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
     levelorder(root)
     
def levelorder(root):
     q=[root,None]
     while(len(q)!=0):
          el=q.pop(0)
          if(el==None):
               print()
               if(len(q)!=0):
                    q.append(None)
          else:
               print(el.data,end=' ')
               if(el.left):
                    q.append(el.left)
               if(el.right):
                    q.append(el.right)

def sumTree(root):
     if(root.left is None and root.right is None):
          return True
     if(root.left is None and root.right is not None):
          return False
     if(root.left is not None and root.right is None):
          return False
     
     ans1=sumTree(root.left)
     ans2=sumTree(root.right)
     l=0
     r=0
     if(root.left):
          l=root.left.data
     if(root.right):
          r=root.right.data
     ans3=root.data==(l+r)
     if(ans1 and ans2 and ans3):
          return True
     else:
          return False


          
Tree()
print(sumTree(root))
