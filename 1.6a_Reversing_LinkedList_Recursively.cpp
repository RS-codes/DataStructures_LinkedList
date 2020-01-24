//1.6-a Reversing a Linked List recursively

/*  reverse a L.L recursively*/
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
    if(head==NULL)head=temp;
    else{
        Node* temp1=head;
        while(temp1->next!=NULL)temp1=temp1->next;
        temp1->next=temp;
    }
}

void Reverse(Node* p){ //recursive method
    if(p->next==NULL) { //exit condition
        head=p;
        return;
    }
    else {
        Reverse(p->next);  //recursive call
        Node* q=p->next;
        q->next=p;
        p->next=NULL;
    }
}

void Print(Node* p){  //recursive method
    if(p==NULL) {cout<<endl;return;} //exit condition
    cout<<p->data<<" ";
    Print(p->next);  //recursive call
}


int main()
{
    head=NULL;
    InsertEnd(1);
    InsertEnd(2);
    InsertEnd(3);
    InsertEnd(4);
    Print(head);  //1 2 3 4
    Reverse(head);
    Print(head); //4 3 2 1
    return 0;
}

