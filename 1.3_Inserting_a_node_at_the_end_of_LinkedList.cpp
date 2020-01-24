//1.3 Inserting a node at the end of a Linked List

/* insert a node @ end */

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;
void InsertEnd(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        Node* temp1=head;
        while(temp1->next!=NULL) temp1=temp1->next;
        temp1->next=temp;
    }
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

    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        InsertEnd(x);
    }
    Print();
    return 0;
}



