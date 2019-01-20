#include<iostream>
using namespace std;
float convert(float C)
{
	return 1.8*C+32.0;
}
int main()
{
	int c;
	cout<<"please enter the celsius value:";
	cin>>c;
	int f=convert(c);
	cout<<c<<" degrees celsius is "<<f<<" degrees fahrenheit";
	return 0;
	}
