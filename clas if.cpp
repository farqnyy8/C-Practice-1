/*
Write a C++ program to do the following:
1. Enter 5 scores
2. Find the average
3. Find the grade letter
4. Display the output. for example:
Enter 5 scores: 90 89.90 100 100 100
The letter grade is: A.
The grade is passing.
*/

#include <iostream>

using namespace std;

int main()
{
	float score1, score2, score3, score4, score5, average;
	char grade;
	
	//code
	cout<<"Enter 5 Scores: ";
	cin>>score1>>score2>>score3>>score4>>score5;
	
	//average
	average=0;
	average=(score1+score2+score3+score4+score5)/5;
	
	//finding grade
	if(average>=90)
	grade='A';
	else if(average>=80)
	grade='B';
	else if(average>=70)
	grade='C';
	else if(average>=60)
	grade='D';
	else
	grade='F';
	
	//grade display
	cout<<"The letter grade is: "<<grade<<endl;
	
	//passing value
	if(grade=='A' || grade=='B' || grade=='c')
	cout<<"The grade is passing\n";
	else
	cout<<"The grade is not passing\n";
	
	return 0;
}

