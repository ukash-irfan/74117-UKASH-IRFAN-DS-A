#include <iostream>
using namespace std;
int main()
{
	int arr[10] ;
	int key,low=0,high=9,minIndex, temp;
	int mid,pos=-1;
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
	cout <<"Order: "<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
		cout<<"\nEnter number you want to find : ";
	cin>>key;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			pos = mid;
			break;
			}
		else if(key>arr[mid]){
			low=mid+1;
			}
		else {
			high=mid-1;}
			}
	if(pos!=-1)
		cout<<"Number found at index "<<pos;
	else
		cout<<"Number not found.";
	return 0;
}
