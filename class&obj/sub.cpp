#include<iostream>
using namespace std;
class Sub
{
    public:
    	int a,b,c;
    	
    public:
    	void collect();
    	void calculate();
    	void display();
};
void Sub::collect()
{
	cout<<"enter the value of a and b:";
	cin>>a>>b;
}
void Sub::calculate()
{
	 c=a-b;
}
void Sub::display()
{
	cout<<"subtraction is:"<<c;
}
int main()
{
	Sub obj;
	obj.collect();
	obj.calculate();
	obj.display();
}
