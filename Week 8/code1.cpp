#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int *p = arr;
	for(int i=0;i<5;i++){
		*(p)=i;	
	}
	for (int i = 0; i < 5; i++){
		cout<<*(p)<<endl;
	}
	return 0;
}
