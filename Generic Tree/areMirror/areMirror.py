class Node:
     def __init__(self,data):
          self.data=data
          self.child=[]
root=None


def genericTree():
     arr=[10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1]
     stack=[]
     root=None
     for i in range(len(arr)):
          if(arr[i]==-1):
               stack.pop()
          else:
               newnode=Node(arr[i])
               if(len(stack)==0):
                    root=newnode
               else:
                    stack[-1].child.append(newnode)
               stack.append(newnode)

     def areMirror(root1,root2):
          if(len(root1.child)!=len(root2.child)):
               return False
          for i in range(len(root1.child)):
               j=len(root2.child)-1-i
               c1=root1.child[i]
               c2=root2.child[j]
               if(areMirror(c1,c2)==False):
                    return False
          return True


genericTree()