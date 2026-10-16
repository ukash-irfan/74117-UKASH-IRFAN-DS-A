#include<iostream>
using namespace std;
int main()
{
	int n;
	int mark[7]={45,34,53,896,435,664,865};
	int *p=mark;
	cout<<"Enter number you want to find:";
	cin>>n;
	for(int i=0;i<7;i++)
	{
		if(n==*(p+i))
		cout<<"Index of that number is: "<<i<<"\nand Address of that operator is :"<<(p+i);
	}	
	return 0;
}
