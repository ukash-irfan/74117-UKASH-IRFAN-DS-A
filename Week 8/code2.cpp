#include <iostream>
using namespace std;
int main() {
    int arr[5];        
    int *ptr = arr;     

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = (i + 1) * 10; 
    }
    printf("Array values: ");
    for (int i = 0; i < 5; i++) {
        cout<<*(ptr + i);
    }
    return 0;
}
