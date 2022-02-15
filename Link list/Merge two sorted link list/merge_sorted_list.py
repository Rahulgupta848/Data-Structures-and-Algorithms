from heapq import merge


class Node:
     def __init__(self,data):
          self.data=data
          self.next=None
class linklist:
     def __init__(self):
          self.root =None
          self.tail =None
     
     def addAtEnd(self,data):
          temp=Node(data)
          if(self.root is None):
               self.root=temp
               self.tail=temp
          else:
               self.tail.next=temp
               self.tail=temp
     
     def traverse(self):
          temp=self.root
          while(temp is not None):
               print(temp.data,'->',end='')
               temp=temp.next
     def size(self):
          ans=0
          temp=self.root
          while(temp is not None):
               ans+=1
               temp=temp.next
          return ans
     

def mergeSortedList(root1,root2):
     mergedList=linklist()
     while(root1!=None or root2!=None):
          if(root1 is None and root2!=None):
               mergedList.addAtEnd(root2.data)
               root2=root2.next
          elif(root2 is None and root1!=None):
               mergedList.addAtEnd(root1.data)
               root1=root1.next
          else:
               v1=root1.data
               v2=root2.data
               if(v1>v2):
                    mergedList.addAtEnd(v2)
                    root2=root2.next
               else:
                    mergedList.addAtEnd(v1)
                    root1=root1.next
     mergedList.traverse()

def main():
     l1=linklist()
     l1.addAtEnd(10)
     l1.addAtEnd(30)
     l1.addAtEnd(50)
     l1.addAtEnd(70)
     l1.addAtEnd(80)
     l1.addAtEnd(90)

     l2=linklist()
     l2.addAtEnd(20)
     l2.addAtEnd(40)
     l2.addAtEnd(60)
     mergeSortedList(l1.root,l2.root)
if __name__ == "__main__":
     main()