#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *link;
    Node(int data)
    {
        this->data=data;
        this->link=NULL;
    }
};
Node *root=NULL;
void insertAtHead(int data)
{
    Node *temp=new Node(data);
    if(root==NULL)
    {
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
    
}

void insertAtEnd(int data)
{
    Node *temp=new Node(data);
    Node *p=root;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        while(p->link !=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }

}

void TraverseList()
{
    Node *temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
}

int size()
{
    Node *p=root;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    return count;
}

void insert(int pos,int data)
{
    if(pos>size()+1)
    {
        cout<<"position out of bound"<<endl;
        return;
    }
    else if(pos==1)
    {
        insertAtHead(data);
    }
    else if(pos==size()+1)
    {
        insertAtEnd(data);
    }
    else
    {
        Node *temp=new Node(data);
        Node *p=root;
        for (int i=1;i<pos-1;i++)
        {
            p=p->link;
        }
        temp->link=p->link;
        p->link=temp;

    }

}

void Delete(int pos)
{
    Node *p=root;
    for (int i=1;i<pos-1;i++)
    {
        p=p->link;
    }
    Node *q=p->link;
    p->link=q->link;
    q->link=NULL;
    free(q);
}
int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    TraverseList();
    Delete(2);
    cout<<'\n'<<root->data<<endl;
    return 0;
}