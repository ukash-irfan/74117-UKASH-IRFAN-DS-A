#include <iostream>
using namespace std;

class Stack
{
private:
    struct Node
    {
        int data;
        Node* next;
    };
    Node* topNode;
    int count;
public:

    Stack()
    {
        topNode = NULL;
        count = 0;
    }

    ~Stack()
    {
        while (topNode != NULL)
        {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return topNode == NULL;
    }

    void push(int value)
    {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = topNode;

        topNode = newNode;
        count++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }

        Node* temp = topNode;

        int value = temp->data;

        topNode = topNode->next;

        delete temp;

        count--;

        return value;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        return topNode->data;
    }

    int size()
    {
        return count;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    cout << "Is stack empty? ";

    if (s.isEmpty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
