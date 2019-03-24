/*
Write a C++ program which prompt the Student to:
1. Enter first name
2. Enter last name
3. Enter DOB
4. Enter Address
5. Enter Income
6. Enter Gender (f: female m: male)
7. Enter 3 scores
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//declaring variables
	string fName, lName, address;
	short month, day, year;
	double income;
	float score1, score2, score3;
	char sp, gender;
	//code
	cout<<"Enter first name: ";
	cin>>fName;
	
	cout<<"Enter last name: ";
	cin>>lName;
	
	cout<<"Enter DOB (mm/dd/yyyy): ";
	cin>>month>>sp>>day>>sp>>year;
	cin.ignore();
	
	cout<<"Enter Address: ";
	getline (cin, address);
	
	cout<<"Enter Income: ";
	cin>>income;
	
	cout<<"Enter gender (f:female m:male): ";
	cin>>gender;
	
	cout<<"Enter 3 scores";
	cin>>score1>>score2>>score3;
	
	
	cout<<"*************************************************\nFullname\tDOB\tScore1"<<endl;
	cout<<fName<<"\t"<<lName<<"\t"<<score1<<endl;
	cout<<"_________________________________________________"<<endl;
	cout<<"Address\t\t\t\t\t\t\t\t\tIncome\t\t\tScore2"<<endl;
	cout<<address<<"\t\t\t"<<income<<"\t\t\t"<<score2<<endl;
	cout<<"_________________________________________________"<<endl;
	cout<<"Gender\t\t\t\t\tScore3"<<endl;
	cout<<gender<<"\t\t\t\t\t"<<score3<<endl;
	cout<<"*************************************************";
	return 0;
}
