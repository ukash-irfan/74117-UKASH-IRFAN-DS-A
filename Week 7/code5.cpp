#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    Node* last = NULL;
    int key, tempr;
    cout << "Dessending to Assending" << endl;
    cout << "Enter 10 Numbers in your list : ";
    for (int i = 0; i < 10; i++) {
        Node* newNode = new Node();
        cin >> newNode->data;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            last = newNode;
        } else {
            last->next = newNode;
            last = newNode;
        }
    }
    for (Node* i = head; i != NULL; i = i->next) {
        Node* minNode = i;
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (j->data < minNode->data) {
                minNode = j;
            }
        }
        tempr = i->data;
        i->data = minNode->data;
        minNode->data = tempr;
    }
    cout << "Order: " << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Enter number you want to find : ";
    cin >> key;
    temp = head;
    int pos = -1;
    int index = 0;
    while (temp != NULL) {
        if (temp->data == key) {
            pos = index;
            break;
        }
        temp = temp->next;
        index++;
    }
    if (pos != -1)
        cout << "Number found at index " << pos << endl;
    else
        cout << "Number not found." << endl;

    return 0;
}
