#include <iostream>
using namespace std;
int main()
{
	int arr[5];
	int key,low=0,high=4;
	int mid,pos=-1;
	cout<<"Enter 5 Numbers in your array : ";
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	cout<<"Enter number you want to find : ";
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
