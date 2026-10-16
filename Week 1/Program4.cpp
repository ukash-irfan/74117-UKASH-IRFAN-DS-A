#include<iostream>
using namespace std;
int main()
{
	int sum,product;
	char opt;
	float average;
	int num1,num2,num3,num4;
	cout<<"Enter 4 numbers =";
	cin>>num1>>num2>>num3>>num4;
	cout<<"Press s for sum \n Press p for product \n Press a for average ";
	cin>>opt;
	switch(opt)
	{
	
	case 's':
		sum=num1+num2+num3+num4;
		cout<<"Sum of four num ="<<sum;
		break;
		case 'p':
		product=num1*num2*num3*num4;
		cout<<"Product of four num ="<<product;
		break;
		case 'a':
		average=(num1+num2+num3+num4)/4;
		cout<<"Average of four num="<<average;
		break;
		default:
			cout<<"Invalid key";
			return 0;
}
}
