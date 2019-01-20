#include<iostream>
using namespace std;
void display(int,int);
int main()
{
	int h,m;
	cout<<"enter the number of hours:";
	cin>>h;
	cout<<"enter the number of minutes:";
	cin>>m;
	display(h,m);
	return 0;
}
void display(int h,int m)
{
	cout<<"time:"<<h<<":"<<m;
	
}
