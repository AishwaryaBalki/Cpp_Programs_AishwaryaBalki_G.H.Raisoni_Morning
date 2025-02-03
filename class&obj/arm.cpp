#include<iostream>
using namespace std;
class arm
{
	public:
		int num,rem,sum=0;
		int org;
	public:
		void collect();
		void check();
		void display();
};
void arm::collect()
{
	cout<<"enter the number:";
	cin>>num;
	org=num;
}
void arm::check()
{
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
}
void arm::display()
{
	if(org==sum)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not";
	}
}
int main()
{
	arm obj1;
	obj1.collect();
	obj1.check();
	obj1.display();
}
