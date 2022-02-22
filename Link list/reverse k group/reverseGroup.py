from linkList import*
def reverseGroup(root,k):
     if(root == None):
          return None
     curr=root
     p=None
     f=None
     count=0
     while(count<k and curr is not None):
          f=curr.next
          curr.next=p
          p=curr
          curr=f
          count+=1
     root.next=reverseGroup(curr,k)
     return p

def main():
     l1=linkList()
     l1.addAtend(10)
     l1.addAtend(20)
     l1.addAtend(30)
     l1.addAtend(40)
     l1.addAtend(50)
     l1.addAtend(60)
     l1.addAtend(70)
     l1.addAtend(80)
     ans=reverseGroup(l1.root,3)
     while(ans):
          print(ans.data,"->",end='')
          ans=ans.next
if __name__=="__main__":
     main()