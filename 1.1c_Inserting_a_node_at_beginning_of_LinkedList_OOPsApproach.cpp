//1.1-b Inserting a node at the beginning of a Linked List

/* Linked list with Object Oriented Approach- insertion at head  ,... juz an attempt*/

#include<iostream>
using namespace std;


class Node{
private:
    int data;
    Node* next, *head;
public:
    Node(){
        head=NULL;
    }

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

    void Print(){
        cout<<"List: ";
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        }
};

int main()
{
    Node LL;
    LL.Insert(1);
    LL.Insert(2);
    LL.Insert(3);
    LL.Print();  //3 2 1
    return 0;
}

