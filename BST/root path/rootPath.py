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

def rootPath(root,val):
     if(root.data==val):
          return [val]
     if(root.left):
          ans=rootPath(root.left,val)
          if(len(ans)>0):
               ans.append(root.data)
               return ans
     if(root.right):
          ans=rootPath(root.right,val)
          if(len(ans)>0):
               ans.append(root.data)
     d=[]
     return d
print(rootPath(root,10))

