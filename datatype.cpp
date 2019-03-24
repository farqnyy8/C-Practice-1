/* Write a c++ rogran to bdo the folowing:
1. Enter your name
2. Enter your age
3. Enter your id
4. Enter your gender
5. Enter your income 
6. Enter your score*/

#include<iostream>
using namespace std;

int main ()
{
	//local var
	string fullname, id;
	short age; 
	char gender;
	double income;
	float score;
	
	cout <<"Enter your fullname: "<<flush;
	getline(cin, fullname);
	cout <<"Enter your age: "<<flush;
	cin>>age;
	cout <<"Enter your ID Number: "<<flush;
	cin>>id;
	cout <<"Enter your gender: "<<flush;
	cin>>gender;
	cout <<"Enter your income: "<<flush;
	cin>>income;
	cout <<"Enter your score: "<<flush;
	cin>>score;
	
	return 0;
}
