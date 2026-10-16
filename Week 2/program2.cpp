#include<iostream>
using namespace std;
int main()
{
	int marks[5];
	int *p=marks;
	for(int i=0;i<5;i++)
	{
	cout<<"Enter marks: ";
	cin>>*(p+1);
	}
	cout<<"\nStudent Marks:";
	for(int i=0;i<5;i++)
	{
		cout<<*(p+1)<<" ";
	}
	return 0;
}
