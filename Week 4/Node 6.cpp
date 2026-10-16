#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
int main(){
	Node*head=NULL;
	Node*current=NULL;
	int n;
	cout<<"Enter a number How many Node you want : ";
	cin>>n;
	for(int i=1; i<=n; i++){
		Node*newNode= new Node;
		cout<<"Enter data for "<<i<<" Node : ";
		cin>>newNode->data;
		newNode->next=NULL;
		if (head==NULL){
			head=newNode;
			current=newNode;
		}
		else{
			current->next=newNode;
			current=newNode;
		}
}
		cout<<"Linked list : "<<endl;
		current=head;
		while(current != NULL){
			cout<<current->data<<endl;
			current=current->next;
			}
	return 0;
}
