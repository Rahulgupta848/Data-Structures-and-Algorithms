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

def serachBST(root,el):
     if(root.data==el):
          return True
     if(el>root.data):
          if(root.right):
               return serachBST(root.right,el)
     else:
          if(root.left):
               return serachBST(root.left,el)
     return False

print(serachBST(root,30))