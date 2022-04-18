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


Tree()

#approach 1

def leaftonode(root,n1):
     if(root is None):
          return []
     if(root.data==n1):
          return [n1]
     ans1=leaftonode(root.left,n1)
     ans2=leaftonode(root.right,n1)
     if(len(ans1)>0):
          ans1.append(root.data)
          return ans1
     elif(len(ans2)>0):
          ans2.append(root.data)
          return ans2
     else:
          return []


def LCA1(root,n1,n2):
     ans1=leaftonode(root,n1)
     ans2=leaftonode(root,n2)

     i=len(ans1)-1
     j=len(ans2)-1
     while(ans1[i]==ans2[j]):
          i-=1
          j-=1
     print(ans1[i+1])

#approach 2
def LCA2(root,n1,n2):
     if(root is None):
          return None
     if(root.data==n1 or root.data==n2):
          return root
     ans1=LCA2(root.left,n1,n2)
     ans2=LCA2(root.right,n1,n2)
     if(ans1!=None and ans2!=None):
          return root
     elif(ans1 is None and ans2 is not None):
          return ans2
     elif(ans1 is not None and ans2 is None):
          return ans1
     else:
          return None


# LCA1(root,55,80)
ans=LCA2(root,55,80)
print(ans.data)