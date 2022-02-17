def getIntersectionNode( headA, headB):
     h1=headA
     h2=headB
     countA=0
     countB=0
     if(not headA or not headB):
          return None
     while(h1):
          countA+=1
          h1=h1.next
     while(h2):
          countB+=1
          h2=h2.next
     diff=abs(countA-countB)
     if(countA>countB):
          h1=headA
          h2=headB
     else:
          h1=headB
          h2=headA
          
     for i in range(diff):
          h1=h1.next
     
     while(h1 is not None):
          if(h1==h2):
               return h1
          h1=h1.next
          h2=h2.next
     return None