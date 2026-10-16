#include <iostream>
using namespace std;
class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }    void insertNode(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteNode(int val) {
        if (head == NULL) return;

        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
    bool findNode(int val) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }
    void updateNode(int oldVal, int newVal) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == oldVal) {
                temp->data = newVal;
                return;
            }
            temp = temp->next;
        }
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL"<<endl;
    }
};
int main() {
    LinkedList list;
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    cout << "Initial List: ";
    list.display();
    list.updateNode(20, 25);
    cout << "After Update (20 -> 25): ";
    list.display();
    if (list.findNode(25)) cout << "25 list mein majood hai"<<endl;
    list.deleteNode(10);
    cout << "After Delete (10): ";
    list.display();
    return 0;
}
