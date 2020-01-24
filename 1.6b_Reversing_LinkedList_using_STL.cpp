//1.6-b Reversing a Linked List using Stack STL


/*using STL*/
#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;

void Insert(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    Node* temp1=head;
    temp->next=temp1;
    head=temp;
}

void Reverse(){
    if(head==NULL) return;
    stack<Node*>S;
    Node* temp=head;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->next;
    }
    temp=S.top();head=temp;
    S.pop();
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}


void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    Insert(3);
    Insert(8);
    Insert(87);
    Insert(45);
    Print(); //45 87 8 3

    Reverse();
    Print();  //3 8 87 45
    return 0;
}



