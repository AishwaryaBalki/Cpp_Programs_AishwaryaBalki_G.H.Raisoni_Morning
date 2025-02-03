#include<iostream>
using namespace std;
class multi
{
	public:
	  int a,b,c;
	public:
		void collect();
		void calculate();
		void display();
};
void multi::collect()
{
	cout<<"enter the value of a and b:";
	cin>>a>>b;
}
void multi::calculate()
{
	 c=a*b;
}
void multi::display()
{
	cout<<"subtraction is:"<<c;
}
int main()
{
	multi obj;
	obj.collect();
	obj.calculate();
	obj.display();
}
