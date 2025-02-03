#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	cout<<"before swapping\n";
	cout<<"value of a is "<<a<<"\n";
	cout<<"value of b is "<<b<<"\n";
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping\n";
	cout<<"value of a is "<<a<<"\n";
	cout<<"value of b is "<<b;
	return 0;
}
