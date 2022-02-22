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
     