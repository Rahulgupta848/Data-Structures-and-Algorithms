
class Node:
     def __init__(self,data):
          self.data=data
          self.next=None
class linkList():
     def __init__(self):
          self.root=None
          self.tail=None
     def addAtend(self,data):
          temp=Node(data)
          if(self.root is None):
               self.root=temp
               self.tail=temp
          else:
               self.tail.next=temp
               self.tail=temp
     def traverse(self):
          temp=self.root
          print('\n')
          while(temp is not None):
               print(temp.data,'->',end='')
               temp=temp.next
     def size(self):
          count=0
          temp=self.root
          while(temp is not None):
               temp=temp.next
               count+=1
          return count

     def oddEven(self):
          h=self.root
          o=h
          e=h
          e=e.next
          f=e
          while(e is not None and e.next is not None):
               o.next=e.next
               o=e.next
               e.next=o.next
               e=o.next
          o.next=f
          temp=h
          while(temp is not None):
               print(temp.data,'->',end='')
               temp=temp.next
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
     l1.addAtend(90)
     
     l1.oddEven()
     
if __name__=="__main__":
     main()