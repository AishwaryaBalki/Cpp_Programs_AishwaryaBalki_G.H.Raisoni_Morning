#include<iostream>
using namespace std;
class negativepositive
{
	public:
		int n;
	public:
		 void collect();
		 void check();
		//display();
};
void negativepositive::collect()
{
	cout<<"enter the number:";
	cin>>n;
}
void negativepositive::check()
{
	if(n>0)
	{
		cout<<"positive number:";
	}
	else
	{
	    cout<<"negative number:";	
	}
}
int main()
{
	negativepositive obj;
	obj.collect();
	obj.check();
	
	
}
