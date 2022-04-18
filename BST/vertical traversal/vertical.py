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
     vertical(root,0)


def vertical(root,i):
     #levelorder traversal
     q=[[root,i]]
     min=10**5
     max=-10**5
     map={}
     while(len(q)!=0):
          d=q.pop(0)
          el=d[0]
          idx=d[1]
          if(idx<min):
               min=idx
          if(idx>max):
               max=idx
          if(idx in map):
               map[idx].append(el.data)
          else:
               map[idx]=[el.data]
          if(el.left):
               q.append([el.left,idx-1])
          if(el.right):
               q.append([el.right,idx+1])
     for i in range(min,max+1):
          for j in map[i]:
               print(j,end=' ')
Tree()
