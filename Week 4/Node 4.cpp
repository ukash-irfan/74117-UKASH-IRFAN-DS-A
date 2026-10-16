#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
int main(){
	Node*head=new Node;
	Node*second=new Node;
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=NULL;
Node*current=head;
while(current != NULL){
cout<<current->data<<endl;
current=current->next;
}
return 0;
}
