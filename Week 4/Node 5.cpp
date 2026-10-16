#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
class linkedlist{
	private:
		Node*head;
	public:
		linkedlist(){
		head=NULL;
		}
		void display(){
			Node*current=head;
			while(current != NULL){
			cout<<current->data<<endl;
			current=current->next;
			}
			cout<<endl;
		}
};
int main(){
	linkedlist list;
	return 0;
}
