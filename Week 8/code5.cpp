#include <iostream>
using namespace std;

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
    };
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }
 
    void insertNode(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = newNode;
            cout << "Value " << val << " inserted "<<endl;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        cout << "Value " << val << " inserted "<<endl;
    }
 
    void deleteNode(int val) {
        if (head == NULL) {
            cout << "List Empty "<<endl;
            return;
        }

        Node* temp = head;
 
        if (temp->data == val) {
            head = temp->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
            cout << "Value " << val << " deleted "<<endl;
            return;
        }
 
        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Value not in list  "<<endl;
            return;
        }

        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }

        delete temp;
        cout << "Value " << val << " deleted "<<endl;
    }
 
    bool findNode(int val) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val) 
			return true;
            temp = temp->next;
        }
        return false;
    }
 
    void updateNode(int oldVal, int newVal) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == oldVal) {
                temp->data = newVal;
                cout << "Value " << oldVal << " changed to " << newVal<<endl;
                return;
            }
            temp = temp->next;
        }
        cout << "old value (" << oldVal << ") not available "<<endl;
    }

    void display() {
        if (head == NULL) {
            cout << "Empty "<<endl;
            return;
        }
        Node* temp = head;
        cout << "Current List: ";
        while (temp != NULL) {
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << "NULL "<<endl;
    }
};

int main() {
    DoublyLinkedList list;
    int choice, val, oldVal, newVal;
    do {
        cout << "1. Insert Value"<<endl;
        cout << "2. Delete Value "<<endl;
        cout << "3. Find Value "<<endl;
        cout << "4. Update Value "<<endl;
        cout << "5. Display List "<<endl;
        cout << "6. Exit "<<endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> val;
                list.insertNode(val);
                break;

            case 2:
                cout << "Enter a number:";
                cin >> val;
                list.deleteNode(val);
                break;

            case 3:
                cout << "Enter a number:";
                cin >> val;
                if (list.findNode(val)) {
                    cout << "Result: " << val << " available "<<endl;
                } else {
                    cout << "Result: " << val << " not available "<<endl;
                }
                break;

            case 4:
                cout << "update value: ";
                cin >> oldVal;
                cout << "Enter a number for new value:";
                cin >> newVal;
                list.updateNode(oldVal, newVal);
                break;

            case 5:
                list.display();
               break;

            case 6:
                cout << "END "<<endl;
                break;
            default:
                cout << "Wrong selection please choose from menu "<<endl;
        }
    } while (choice != 6);
    return 0;
}
