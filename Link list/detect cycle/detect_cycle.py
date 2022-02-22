from asyncio import FastChildWatcher


def detect_cycle(head):
     if(head == None):
          return None
     fast=head
     slow=head
     while(fast and fast.next):
          fast=fast.next.next
          slow=slow.next
          if(fast==slow):
               return True
     return False
     