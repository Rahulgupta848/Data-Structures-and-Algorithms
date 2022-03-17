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
def height(root):
     if(root==None):
          return 0
     ans=max(height(root.left),height(root.right))+1
     return ans

def diameter(root):
     if(root==None):
          return 0
     ct1=diameter(root.left)
     ct2=diameter(root.right)
     ct3=height(root.left)+height(root.right)+1
     m=max(ct1,max(ct2,ct3))
     return m
print(diameter(root))