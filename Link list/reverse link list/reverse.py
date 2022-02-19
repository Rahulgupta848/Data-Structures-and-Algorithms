from linkList import*
def reverse(head):
     curr=head
     p=None
     f=None
     while(curr is not None):
          f=curr.next
          curr.next=p
          p=curr
          curr=f
     return p
def main():
     l1=linkList()
     l1.addAtend(10)
     l1.addAtend(20)
     l1.addAtend(30)
     l1.addAtend(40)
     l1.addAtend(50)
     l1.addAtend(60)
     temp=reverse(l1.root)
     while(temp is not None):
          print(temp.data,"->",end='')
          temp=temp.next

if __name__== "__main__":
     main()