#include <iostream>
using namespace std;
int main()
{
	int arr[10] ;
	int minIndex, temp;
	cout<<"Dessending to Assending"<<endl;
	cout<<"Enter 10 Numbers in your array : ";
	for(int i=0; i<10; i++){
		cin>>arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		minIndex = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	cout <<"Order: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
