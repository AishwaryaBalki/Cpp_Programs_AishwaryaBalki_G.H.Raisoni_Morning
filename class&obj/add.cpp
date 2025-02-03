#include<iostream>
using namespace std;
class Add
{
    public:
    	int a,b,c;
    	
    public:
    	void collect();
    	void calculate();
    	void display();
};
void Add::collect()
{
	cout<<"enter the value of a and b:";
	cin>>a>>b;
}
void Add::calculate()
{
	 c=a+b;
}
void Add::display()
{
	cout<<"addition is:"<<c;
}
int main()
{
	Add obj;
	obj.collect();
	obj.calculate();
	obj.display();
}
