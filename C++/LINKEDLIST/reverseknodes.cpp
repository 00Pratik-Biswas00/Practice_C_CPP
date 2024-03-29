#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};





void insertAtTail(node* &head, int  val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head  = n;
        return;
    }
    node* temp  =  head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next =  n;
}


node* reverse(node* head,  int k)
{
    node* preptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<k)
    {
        nextptr  = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next = reverse(nextptr,k);
    }
        


    return preptr;
}




void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}





int main()
{
    node*  head  = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    int k=2;

    node* newhead = reverse(head,k);
    display(newhead);


    return 0;
}

