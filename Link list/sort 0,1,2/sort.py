from linkList import*
def Sort(head):
     zero_head=Node(-1)
     zero_tail=zero_head
     one_head=Node(-1)
     one_tail=one_head
     two_head=Node(-1)
     two_tail=two_head
     curr=head
     while(curr):
          if(curr.data==0):
               zero_tail.next=curr
               zero_tail=curr
          elif(curr.data==1):
               one_tail.next=curr
               one_tail=curr
          elif(curr.data==2):
               two_tail.next=curr
               two_tail=curr
          curr=curr.next
     zero_tail.next=one_head.next
     one_tail.next=two_head.next
     two_tail.next=None
     head=zero_head.next
     return head

def main():
     l1=linkList()
     l1.addAtend(1)
     l1.addAtend(1)
     l1.addAtend(0)
     l1.addAtend(2)
     l1.addAtend(2)
     l1.addAtend(2)
     l1.addAtend(0)
     ans=Sort(l1.root)
     while(ans):
          print(ans.data,'->',end='')
          ans=ans.next
if __name__=="__main__":
     main()