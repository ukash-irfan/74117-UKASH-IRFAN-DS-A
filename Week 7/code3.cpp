#include <iostream>
using namespace std;
int main()
{
	int arr[5];
	int temp;
	cout<<"Assending to Dessending"<<endl;
	cout<<"Enter 5 Numbers in your array : ";
	for(int i=0; i<5; i++){
	cin>>arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
	for (int j = 0; j < 4 - i; j++)
	{
		if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Order: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
