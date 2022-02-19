from linkList import *

def reverse(root,l,h):
     if(l==1):
          curr=root
          p=None
          f=None
          n_tail=root
          for i in range(1,h+1):
               print(i)
               f=curr.next
               curr.next=p
               p=curr
               curr=f
          n_tail.next=curr
          root=p
          return root
     else:
          temp=root
          forward=None
          n_head=None
          n_tail=None
          for i in range(1,l-1):
               temp=temp.next
          previous=temp
          n_head=temp.next
          for i in range(h-l+1):
               temp=temp.next
          n_tail=temp
          forward=temp.next
          print(previous.data)
          print(n_head.data)
          print(n_tail.data)
          if(forward):
               print(forward.data)
          else:
               print('None')
          p=None
          f=None
          curr=n_head
          while(curr is not forward):
               f=curr.next
               curr.next=p
               p=curr
               curr=f
          previous.next=n_tail
          n_head.next=f
          return root
l1=linkList()
l1.addAtend(10)
l1.addAtend(20)
l1.addAtend(30)
l1.addAtend(40)
l1.addAtend(50)
l1.addAtend(60)
head=l1.root
ans=reverse(head,1,6)
while(ans is not None):
     print(ans.data,'->',end='')
     ans=ans.next


