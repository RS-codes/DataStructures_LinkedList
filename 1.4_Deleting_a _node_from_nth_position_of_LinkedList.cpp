//1.4 Deleting a node from 'n'th position of a Linked List

/*delete a node @ nth position*/
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

void Delete(int n){
    Node* temp1=head;
    if(n==1){
    head=temp1->next;
    delete temp1; //dealloc mem
    }
    else{
        for(int i=0;i<n-2;i++){ /*reaches (n-1)th node*/
            temp1=temp1->next;
        }
        Node* temp2=temp1->next;
        temp1->next=temp2->next;
        delete temp2; //dealloc mem
    }

}

void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main()
{
    head=NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Print(); //8 6 4 2
    Delete(3);
    Print();  //8 6 2
    return 0;
}

