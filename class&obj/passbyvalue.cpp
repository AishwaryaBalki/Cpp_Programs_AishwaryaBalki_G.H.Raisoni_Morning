#include<iostream>
using namespace std;
class one
{
	int num;
	public:
	void set(int x)
	{
		num=x;
	}
	void passbyvalue(one obj1,one obj2)
	{
		obj1.num=100;
		obj2.num=200;
		obj1.display();
		obj2.display();
		
	 }
	 void display()
	 {
	 	cout<<num;
	 }
};
int main()
{
	one obj1,obj2,obj3;
	obj1.set(10);
	obj2.set(20);
	cout<<"before passing value:"<<"\n";
	obj1.display();
	cout<<" ";
	obj2.display();
	cout<<"\n";
	obj3.passbyvalue(obj1,obj2);
	cout<<"after passing value:";
	obj1.display();
	obj2.display();
	
	
}
