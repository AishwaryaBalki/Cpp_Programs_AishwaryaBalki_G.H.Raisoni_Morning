#include<iostream>
using namespace std;
class evenodd
{
	public:
		int n;
	public:
		 void collect();
		 void check();
		//display();
};
void evenodd::collect()
{
	cout<<"enter the number:";
	cin>>n;
}
void evenodd::check()
{
	if(n%2==0)
	{
		cout<<"even number:";
	}
	else
	{
	    cout<<"odd number:";	
	}
}
int main()
{
	evenodd obj;
	obj.collect();
	obj.check();
	
	
}
