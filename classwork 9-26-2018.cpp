/*
Write a c++ program to enter ten integer numbers from the keyboard
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int count;
	string name="";
	count=10;
	
	cout<<"Enter your Fullname ten time: \n";
	
	while(count>0)
	{	
		getline(cin, name);
		count--;
	}
	
	return 0;
}
