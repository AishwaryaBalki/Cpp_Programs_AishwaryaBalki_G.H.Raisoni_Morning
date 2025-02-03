#include<iostream>
using namespace std;
class Emp{
	public:
		int id;
		char name[20];
		char phone[20];
		void collect()
		{
			cout<<"enter ID:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter phone no.:";
			cin>>phone;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<phone;
		}
};
int main()
{
	int size;
	cout<<"enter the size of the array:";
	cin>>size;
	
	Emp obj[size];
	int i;
	for(i=0;i<size;i++)
	{
		obj[i].collect();	
	}
	for(i=0;i<size;i++)
	{
		obj[i].display();	
	}
	
	
}
