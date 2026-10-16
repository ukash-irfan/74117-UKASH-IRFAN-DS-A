#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
class LinkedList
{
private:
    Node* head;
public:
    LinkedList()
    {
        head = NULL;  
    }
   void user(){
   	Node*current=NULL;
	int n;
	cout<<"Enter a number How many Node you want : ";
	cin>>n;
	for(int i=1; i<=n; i++){
		Node*newNode=new Node;
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
		cout<<"Orignal Linked list : "<<endl;
		current=head;
		while(current != NULL){
			cout<<current->data<<endl;
			current=current->next;
			}
}
    void insert(int position, int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node* current = head;
            for (int i = 1; i < position - 1; i++)
            {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    void remove(int position){
    	if(position==1){
    		Node* temp = head;
    		head = head->next;
			delete temp;
		}
		else{
			Node*current=head;
			for(int i=1;i<position-1;i++){
				current= current->next;
			}
			Node* temp = current->next;
			current->next= temp->next;
			delete temp;
		}
	}
    void display()
    {
        Node* current = head;
        while (current != NULL)
        {
            cout << current->data <<endl;
            current = current->next;
        }
    }
};
int main()
{
    LinkedList list;
    int p,v,d;
    list.user();
    cout<<"Enter a postion to insert : ";
    cin>>p;
    cout<<"Enter value : ";
    cin>>v;
    list.insert(p,v);
    cout <<"After Insert : "<<endl;
    list.display();
    cout<<"Enter a postion to delete : "<<endl;
    cin>>d;
    list.remove(d);
    cout <<"After Delete : "<<endl;
    list.display();
    return 0;
}
