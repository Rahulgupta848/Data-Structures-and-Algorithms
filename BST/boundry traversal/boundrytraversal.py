class Node:
     def __init__(self,data):
          self.data=data
          self.left=None
          self.right=None

root=None
def Tree():
     global root
# level 0
     root=Node(50)
# level 1
     root.left=Node(25)
     root.right=Node(75)
# level 2
     root.left.left=Node(12)
     root.left.right=Node(30)
     root.right.left=Node(60)
     root.right.right=Node(80)
# level 3
     root.left.left.left=Node(6)
     root.left.right.left=Node(27)
     root.right.left.left=Node(55)
     root.right.right.left=Node(78)   
# level 4
     root.left.left.left.right=Node(8)
     root.left.right.left.left=Node(26)
     root.left.right.left.right=Node(29)
     root.right.right.left.right=Node(79)
     print(boundry(root))

def lefttree(root):
     ans=[]
     if(root.left):
          ans.append(root.data)
          a=lefttree(root.left)
          for i in a:
               ans.append(i)
               
     elif(root.right):
          ans.append(root.data)
          a=lefttree(root.right)
          for i in a:
               ans.append(i)
     return ans

def righttree(root):
     ans=[]
     if(root.right):
          a=righttree(root.right)
          for i in a:
               ans.append(i)
          ans.append(root.data)
     elif(root.left):
          a=righttree(root.left)
          for i in a:
               ans.append(i)
          ans.append(root.data)
     return ans

def leaf(root):
     ans=[]
     if(root.left):
          a=leaf(root.left)
          for i in a:
               ans.append(i)
     if(root.left ==None and root.right==None):
          ans.append(root.data)
     if(root.right):
          a=leaf(root.right)
          for i in a:
               ans.append(i)
     return ans
     

def boundry(root):
     if(root is None):
          return[]
     ans=[]
     ans1=lefttree(root)
     ans2=leaf(root)
     ans3=righttree(root)
     for i in ans1:
          ans.append(i)
     for i in ans2:
          ans.append(i)
     for i in ans3:
          ans.append(i)
     return ans

Tree()