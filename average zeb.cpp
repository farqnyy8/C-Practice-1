//This progran will find the average of five scors

#include<iostream>
using namespace std;

int main()

{
	//Varibale declaration
	//1.declaration and initialisation
	float score1, score2, score3, score4, score5, sum=0, average=0;
	
	//write code here
	//2. finding the summation
	cin>>score1>>score2>>score3>>score4>>score5;
	
	sum=score1 + score2 + score3 + score4 + score5;

	//finding the average
	average=sum/5;
	
	//display the average
	cout << "The average of the following score\n<<"<<
	"\nScore1: "<<score1<<
	"\nScore2: "<<score2<<
	"\nScore3: "<<score3<<
	"\nScore4: "<<score4<<
	"\nScore5: "<<score5<<
	"\nis: " <<average;
	return 0;
}
