//doubly linked list is a type of linked list where a node has both next and previous node pointers

#include <bits/stdc++.h>
using namespace std;

//Node
class node
{
    public:
    node* next;
    node* previous;
    int data; 

    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};


//add at start
void add_at_start(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    if(head!=NULL)
    {
        head->previous = n;
    }
    head=n;
}

//display the linked list
void print(node* head)
{
    node* temp=head;
    cout << "NULL <-> ";
    while(temp!=NULL)
    {
        cout << temp->data << " <-> ";
        temp=temp->next;
    }
    cout << " NULL " << endl;
}

//adding at end
void push(node* &head, int val) 
{
    node* n = new node(val);
    
    if(head==NULL)
    {
        add_at_start(head,val);
        return;
    }

    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
    n->previous=temp;
}

//removing element from start
void delfromhead(node* &head)
{
    node* todel = head;
    if(head->next==NULL)
    {
        head=NULL;
        delete todel;
        return;
    }
    head->next->previous = NULL;
    head = head->next;
    delete todel;
    return;
}

//find and delete
void del(node* &head, int key)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            node* todel = temp;
            if(todel==head)
            {
                delfromhead(head);
                return;
            }
            temp->previous->next = temp->next;
            if(temp->next!=NULL)
            {
                temp->next->previous = temp->previous;
            }
            delete todel;
            return;
        }
        temp = temp->next;
    }
    cout << "KEY NOT PRESENT\n";

}

//removing last element
void pop(node* &head)
{
    node* temp = head;
    if(temp->next == NULL)
    {
        delfromhead(head);
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node* todel = temp;
    temp = temp->previous;
    temp->next = NULL;
    delete todel;
    return;
}

int main()
{
    //initiating doubly linked list
    node* head = NULL;

    // adding few elements
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);

    //performing some tasks
    add_at_start(head,5);
    print(head);
    del(head,3);
    print(head);
    delfromhead(head);
    print(head);
    pop(head);
    print(head);

    return 0;
}