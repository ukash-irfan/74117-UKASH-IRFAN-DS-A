#include<iostream>
using namespace std;
int main()
{
	int searching_num;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter number you want :";
	cin>>searching_num;
	for(int i=0;i<=9;i++)
	{
		if(a[i]==searching_num)
		cout<<"the index of required number is:"<<i;
	}
	return 0;
}
