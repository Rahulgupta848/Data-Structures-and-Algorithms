
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers( l1, l2 ):
     ans=ListNode(0)
     l3=ans
     carry=0
     while(l1 or l2 or carry):
          if(l1 is not None):
               carry=carry+l1.val
               l1=l1.next
          if(l2 is not None):
               carry=carry+l2.val
               l2=l2.next
          newNode=ListNode(carry%10)
          l3.next=newNode
          l3=l3.next
          carry=carry//10
     return ans.next