#include<iostream>
using namespace std;
int main()
{
	int second=3672;
	int remaining_sec;
	int sec,min,hour;
	hour=second/3600;
	remaining_sec=3672%3600;
	min=remaining_sec/60;
    sec=remaining_sec%60;
	
	cout<<"Hour="<<hour<<"\nMinute="<<min<<"\nSecond="<<sec;
	return 0;
}
