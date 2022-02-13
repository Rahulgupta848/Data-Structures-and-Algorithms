from tempfile import tempdir
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
root=None
tail=None
def insertAtHead(data):
    global root,tail
    temp=Node(data)
    if(root==None):
        root=temp
        tail=temp
    else:
        temp.next=root
        root=temp

def insertAtEnd(data):
    global root,tail
    temp=Node(data)
    if(root==None):
        root=temp
        tail=temp
    else:
        tail.next=temp
        tail=temp


def TraverseList():
    global root,tail
    p=root
    while(p!=None):
        print(p.data,"->", end=" ")
        p=p.next

def size():
    p=root
    count=0
    while(p is not None):
        count+=1
        p=p.next
    return count

def insert(pos,data):
    if(pos==1):
        insertAtHead(data)
    elif(pos==size()+1):
        insertAtEnd(data)
    elif(pos>size()+1):
        print('position out of bound')
    else:
        p=root
        temp=Node(data)
        for i in range(1,pos-1):
            p=p.next
        temp.next=p.next
        p.next=temp

insertAtEnd(10)
insertAtEnd(20)
insertAtEnd(30)
insertAtEnd(40)
insertAtEnd(50)
insertAtEnd(60)
insertAtEnd(70)
insert(2,80)
insert(7,90)
TraverseList()
print('\n',size())