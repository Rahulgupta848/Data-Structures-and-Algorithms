class Node:
     def __init__(self,data):
          self.data=data
          self.next=None
root=None
tail=None

def addAtEnd(data):
     global root
     global tail
     temp=Node(data)
     if(root is None):
          root=temp
          tail=temp
     else:
          tail.next=temp
          tail=temp

def traverse():
     global root,tail
     temp=root
     while(temp is not None):
          print(temp.data,'->',end='')
          temp=temp.next

def size():
     ans=0
     global root
     temp=root
     while(temp is not None):
          ans+=1
          temp=temp.next
     return ans

def middle_element():
     global root
     fast=root
     slow=root
     while(fast.next!=None and fast.next.next!=None):
          fast=fast.next.next
          slow=slow.next
     print('\n',slow.data)


def main():
     addAtEnd(10)
     addAtEnd(20)
     addAtEnd(30)
     addAtEnd(40)
     addAtEnd(50)
     addAtEnd(60)
     addAtEnd(70)
     addAtEnd(80)
     traverse()
     middle_element()
     
if __name__ =="__main__":
     main()

