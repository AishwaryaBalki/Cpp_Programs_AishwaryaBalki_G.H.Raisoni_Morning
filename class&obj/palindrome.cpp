#include<iostream>
using namespace std;
class palin
{
	public:
	int num,rem,rev=0;
	int org;
	public:
		void collect();
        void check();
        void display();
};
void palin::collect()
{
	cout<<"enter the number:";
	cin>>num;
	org=num;
}
void palin::check()
{
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
}
void palin::display()
{
	
	if(org==rev)
	{
		cout<<"number is palindrime";

	}
	else
	{
	    cout<<"not";	
	}
}
int main()
{
	palin obj;
	obj.collect();
	obj.check();
	obj.display();
}
