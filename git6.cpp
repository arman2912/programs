#include<iostream>
using namespace std;
double convert(double ly)
{
	return ly*63240;
}
int main()
{
	double ly;
	cout<<"enter the number of light year:";
	cin>>ly;
	double a=convert(ly);
	cout<<ly <<" light years="<<a<<" astronomical units";
	return 0;
}
