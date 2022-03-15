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

     def linewise2Queue(root):
          mq=[root]
          cq=[]
          while(len(mq)!=0):
               el=mq.pop(0)
               print(el.data,end=' ')
               for i in el.child:
                    cq.append(i)
               if(len(mq)==0):
                    mq=cq
                    cq=[]
                    print()
     
     def linewise1Queue(root):
          q=[root]
          q.append(None)
          while(len(q)!=0):
               el=q.pop(0)
               if(el==None):
                    print()
                    if(len(q)!=0):
                         q.append(None)
               else:
                    print(el.data,end=' ')
                    for i in el.child:
                         q.append(i)
     #linewise2Queue(root)
     linewise1Queue(root)

genericTree()