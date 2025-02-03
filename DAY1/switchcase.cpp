#include<iostream>
using namespace std;
int main()
{
   int Day_Number;
   cout<<"enter 1,2,3,4,5,6 or 7";
   cin>>Day_Number;
   switch(Day_Number){
   	case 1:
   		cout<<"sunday";
   		break;
   	case 2:
   		cout<<"monday";
   		break;
   	case 3:
   		cout<<"tuesday";
   		break;
   	case 4:
   		cout<<"wednesday";
   		break;
   	case 5:
   		cout<<"thursday";
   		break;
   	case 6:
   		cout<<"friday";
   		break;
   	case 7:
   		cout<<"saturday";
   		break;
   	default:
   		cout<<"invalid choice";
   		break;
   		return 0;
   }
}
