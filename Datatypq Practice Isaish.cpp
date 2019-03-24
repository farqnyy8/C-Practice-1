//this is a program to add two numbers

#include <iostream>

using namespace std;


int main ()
{
	// data_type variable_name;
	
	//declaration
	int number_1;
	int number_2;
	int sum;
	
	/*
	rules for naming variables
	1. start with letter or underscore
	2. continue with letter, underscore or number
	3. any other thing is WRONG!!!
	*/
	
	
	//initialisation
	number_1 = 3;
	number_2 = 89;
	sum = number_1 + number_2;
	
	cout << "The sum of Number 1 and Number 2 is " << sum << endl;
	

	cout << "Enter two numbers to fin their sum: " << endl; //cout is for output
	
	//initialisation	
	cin >> number_1;
	cin >> number_2;
	
	cout << "The sum of Number 1 and Number 2 is " << sum << endl;
	
	
	
	return 0;
}

