//1.1-b Inserting a node at the beginning of a Linked List

/* insert a node @ beginning using Head as local variable */

#include<iostream>
using namespace std;

struct Node{
int data;
Node* next;
};

Node* Insert(int x,Node* head){/*arg:num,head(Node*),return Node* */
	Node* temp=new Node;
	temp->data=x;
	temp->next=NULL;
	if(head!=NULL)
		temp->next=head;
	head=temp;
	return head;
}

void Print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
} 

int main(void){
	Node* head=NULL;  //local
	int n,x;
	cout<<"Enter size: ";
	cin>>n;
	cout<<"Enter elements:\n";
	for(int i=0;i<n;i++){
		cin>>x;
		head=Insert(x,head); //pass head as parameter
	}
	Print(head);//pass head as parameter
	return 0;
}


