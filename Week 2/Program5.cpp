#include<iostream>
using namespace std;
int main()
{
	int max,min;
	int arr[7]={23,34,43,23,44,53,45};
	int *p=arr;
	max=*p;
	for(int i=1;i<7;i++)
	{
		if(*(p+i)>max)	
		max=*(p+i);
	}
		cout<<"Maximum value is :"<<max;
	min=*p;
	cout<<endl;
		for(int i=1;i<7;i++)
	{
		if(*(p+i)<min)		
		min=*(p+i);
	}
	cout<<"Minimum value is :"<<min;
}
