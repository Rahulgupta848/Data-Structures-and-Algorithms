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

def heightBST(root):
     if(root.left==None and root.right==None):
          return 1
     ml=0
     mr=0
     if(root.left):
          ml=heightBST(root.left)
     if(root.right):
          mr=heightBST(root.right)
     return max(ml,mr)+1
print(heightBST(root))