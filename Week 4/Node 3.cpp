#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
int main(){
	Node*head=new Node;
	Node*second=new Node;
	Node*third=new Node;
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=NULL;
	third->data=30;
	third->next=NULL;
	cout<<head->data<<endl;
	cout<<second->data<<endl;
	cout<<third->data;
	return 0;;
}
