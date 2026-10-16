#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int sum;
	int *p = arr;
	for(int i=0;i<5;i++){
		*(p+i)=i;	
	}
	for (int i = 0; i < 5; i++){
		sum=sum+*(p+i);
	}
	cout<<sum<<endl;
	return 0;
}
