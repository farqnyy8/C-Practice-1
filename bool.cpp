#include<iostream>
using namespace std;

int main ()
{
	short year;
	
	cout <<"Input the year to find out if it is a leap year"<<endl;
	cin>>year;
	
	bool value = ((year%4) == 0);
	if (value)
	cout<<"It is a leap year";
	else
	cout<<"It is not a leap year";
	
	return 0;
	
}
