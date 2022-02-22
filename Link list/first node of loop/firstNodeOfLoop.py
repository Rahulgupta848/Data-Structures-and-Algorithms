def firstNodeOfLoop(head):
     if(head == None):
          return None
     fast=head
     slow=head
     flag=False
     while(fast and fast.next):
          fast=fast.next.next
          slow=slow.next
          if(fast==slow):
               flag=True
               break
     slow=head
     if(flag==True):
          slow=slow.next
          fast=fast.next
          if(fast==slow):
               return fast

     else:
          return None