//1.7 Printing the elements of a Linked List (forward and reverse)

/* Print(FORWARD & REVERSE) using RECURSIVE FUNCTION  */

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x){ //insert @ begining
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void Print(Node* p){
    if(p==NULL){cout<<endl; return;}
    cout<<p->data<<" ";
    Print(p->next);
}

void RevPrint(Node* p){
    if(p==NULL) return;
    RevPrint(p->next);
    cout<<p->data<<" ";
}

int main()
{
    head=NULL;
    Insert(10);
    Insert(20);
    Insert(5);
    Insert(1);
    Print(head);  //1 5 20 10
    RevPrint(head);   //10 20 5 1
    return 0;
}


