#include <iostream>
using namespace std;
int main()
{ 
    int swap;
    int arr[25];
    int array[25];    
    for (int i = 0; i < 25; i++) {
        arr[i] = i + 1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 25; i++){
        array[i] = (i + 1) * 10;
        cout<<array[i]<<" ";
    }
    cout << "\n\n--- After Swapping ---\n";
    for (int i = 0; i < 25; i++) {
        swap = arr[i];
        arr[i] = array[i];
        array[i] = swap;
    }
    cout << "First Array: ";
    for (int i = 0; i < 25; i++) {
        cout << arr[i] << " ";
    }   
    cout << endl;
    cout << "Second Array: ";
    for (int i = 0; i < 25; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
