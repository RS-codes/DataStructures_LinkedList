//1.5 Reversing a Linked List iteratively

/* reverse a L.L iteratively*/
/* Note: 
	 Iterative solution- Time: O(n); Space: O(1)
	Recursive solution- Time: O(n); Space: O(n),we use implicit stack in recursive method	
*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x){
   Node* temp=new Node();
   temp->data=x;
   temp->next=head;
   head=temp;
}

void Reverse(){
    Node *ct,*prev, *next;
    ct=head;
    prev=NULL;
    while(ct!=NULL){
        next=ct->next;
        ct->next=prev;
        prev=ct;
        ct=next;
    }
    head=prev;
}

void Print()
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        Insert(x);
    }
    cout<<"List: \n";
    Print();
    Reverse();
    cout<<"Reversed list: \n";
    Print();

    return 0;
}



