//1.1-a Inserting a node at the beginning of a Linked List

/* insert a node @ beginning*/
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x){
    Node* temp= new Node;
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
        temp->next=head;
    head=temp;
}

void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    head=NULL;
    int n,x,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        Insert(x);
    }
    Print();

    return 0;
}


