#include<iostream>
using namespace std;
class maximum
{
	public:
		int num1,num2;
		
	public:
		void collect();
		void check();
};
void maximum::collect()
{
	cout<<"enter the first number:";
	cin>>num1;
	cout<<"enter the second number:";
	cin>>num2;
}
void maximum::check()
{
	if(num1>num2)
	{
		cout<<"num1 is greater";
	}
	else
	{
		cout<<"num2 is greater";
	}
}
int main()
{
	 maximum obj1;
	obj1.collect();
	obj1.check();
}
