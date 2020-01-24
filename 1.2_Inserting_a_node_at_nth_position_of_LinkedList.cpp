//1.2 Inserting a node at 'n'th position of a Linked List

/* insert a node @ nth position */

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


Node* head;

void Insert(int x,int n){
   if(head==NULL  && n!=1) return; 
    Node* temp1=new Node();
    temp1->data=x;

    if(n==1){
        temp1->next=head;
        head=temp1;
        }
    else{
        Node* temp2=head;
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;  //reached n-1 node
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
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
    Insert(2,1);
    Insert(4,2);
    Insert(6,3);
    Insert(8,4);
    Insert(5,4);
    Insert(3,1);
    Print();  //3 2 4 6 5 8
    return 0;
}


