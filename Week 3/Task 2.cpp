#include <iostream>
using namespace std;
class List {
private:
    int arr[10];
    int size;
    int n;
public:
    List() {
        size = 0;
    } 
    void input() {
        cout << "Enter size: ";
        cin >> n;
        size = n;
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void remove() {
        int position;
        cout << "Enter index to delete: ";
        cin >> position;

        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
    }
    void display() {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int Length() {
        return size;
    }
};
int main() {
    List list;
    list.input();
    list.display();
    list.remove();
    list.display();
    cout << "Length of list is: " << list.Length() << endl;

    return 0;
}
