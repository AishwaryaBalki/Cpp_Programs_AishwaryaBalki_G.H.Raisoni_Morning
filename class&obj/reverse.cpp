#include<iostream>
using namespace std;
class rev
{
	public:
	  int num,rev,rem;
	public:
		void collect();
		void calculate();
		void display();
};
void rev::collect()
{
	cout<<"enter the number:";
	cin>>num;
}
void rev::calculate()
{
	 while(num>0)
	 {
	 	rem=num%10;
	 	rev=rev*10+rem;
	    num=num/10;
	 }
}
void rev::display()
{
	cout<<"reverse of number is:"<<rev;
}
int main()
{
	rev obj;
	obj.collect();
	obj.calculate();
	obj.display();
}
