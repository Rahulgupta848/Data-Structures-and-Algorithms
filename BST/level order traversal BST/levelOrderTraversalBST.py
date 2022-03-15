class Node:
     def __init__(self,data):
          self.data=data
          self.left=None
          self.right=None
root=None
def BST(root,data):
     if(root is None):
          return Node(data)
     if(data>root.data):
          root.right= BST(root.right,data)
     else:
          root.left= BST(root.left,data)
     return root
arr=[50,25,75,15,30,85,10,20,27,45,95,87]

for i in arr:
     root=BST(root,i)

def levelOrderTraversalBST(root):
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

levelOrderTraversalBST(root)
