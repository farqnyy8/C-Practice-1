//write a c+ program to enter your name from the keyboard

#include<iostream>
using namespace std;

int main()
{
	//variable declaration
	string name;
	//write your code here
	cout <<"Enter your name: " << endl;
	//cin>.name; would only allow the first word to be inputed without spaces	
	getline(cin,name);
	
	cout << "You entered: " << name <<endl;
	
	return 0;
}
