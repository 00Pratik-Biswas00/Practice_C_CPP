#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data = val;
        next  = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);;
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

// using iterator

/*
node* merge(node* &head1, node* &head2)
{
    node* p1 = head1;
    node* p2 = head2;
    node* dummyptr = new node(-1);
    node* p3 = dummyptr;

    while(p1!=NULL && p2!=NULL)
    {

        if(p1->data< p2->data)
        {
            p3->next = p1;
            p1=p1->next;
        }
        else{
            p3->next = p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next = p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next = p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyptr->next;

}
*/








void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null\n";
}


node* mergeRecurse(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
        
    if(head2 == NULL)
    {
        return head1;
    }

    node* res;
    if(head1->data < head2->data)
    {
        res = head1;
        res->next = mergeRecurse(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = mergeRecurse(head1, head2->next);        
    }
    return res;
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;

    int arr1[]={1,3,5,7,9,11};
    int arr2[]={2,4,6};

    for(int i=0;i<6;i++)
    {
        insertAtTail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++)
    {
        insertAtTail(head2,arr2[i]);
    }

    display(head1);
    display(head2);

//    node* newhead = merge(head1,head2);
//    display(newhead);

    node* Newhead = mergeRecurse(head1,head2);
    display(Newhead);

    return 0;
}