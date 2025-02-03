#include<iostream>
using namespace std;
int main()
{
	int num,d1,d2,d3;
	cout<<"enter the number:";
	cin>>num;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	cout<<"reverse of number:";
	cout<<d1<<d2<<d3;
	return 0;
}
