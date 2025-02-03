#include<iostream>
using namespace std;
int main()
{
  int omarks,tmarks;
  float percentage;
  cout<<"enter obtained marks:";
  cin>>omarks;
  cout<<"enter total marks:";
  cin>>tmarks;
  percentage=(omarks*100)/tmarks;
  cout<<"per "<<percentage;
  return 0;
}
