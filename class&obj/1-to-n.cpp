#include<iostream>
using namespace std;
class numbers
{
	public:
		int i,n;
		
	public:
		void collect();
		void condition();
		//void display();
};
void numbers::collect()
{
	cout<<"enter the value of n:";
	cin>>n;
}
void numbers::condition()
{
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
	}
}
//void numbers::display()
//{
//	cout<<i;
//}
int main()
{
	numbers obj1;
	obj1.collect();
	obj1.condition();
	//obj1.display();
}

