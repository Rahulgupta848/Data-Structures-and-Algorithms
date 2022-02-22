def delete_duplicate_sorted(head):
     if(head==None):
          return None
     curr=head
     while(curr):
          if(curr.next and curr.data==curr.next.data):
               next_node=curr.next.next
               rm_node=curr.next
               curr.next=next_node
          else:
               curr=curr.next
     return head