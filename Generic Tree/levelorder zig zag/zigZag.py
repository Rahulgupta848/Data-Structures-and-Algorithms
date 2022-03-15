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

     def zigzag(root):
          dq=[root,None]
          flag=True
          while(len(dq)!=0):
               if(flag==True):
                    el=dq.pop(0)
               else:
                    el=dq.pop()
               if(el==None):
                    print()
                    if(flag==True and len(dq)!=0):
                         flag=False
                         dq.insert(0,None)
                    elif(flag==False and len(dq)!=0):
                         flag=True
                         dq.append(None)
               else:
                    print(el.data,end=' ')
                    if(flag==True):
                         for i in el.child:
                              dq.append(i)
                    else:
                         for i in range(len(el.child)-1,-1,-1):
                              dq.insert(0,el.child[i])



     zigzag(root)


genericTree()