//This is a program to find the avearge of five numbers

#include<iostream>
using namespace std;
 
int main()

{
	//Declare variables
	float average, score1, score2, score3, score4, score5;
	
	//prompt the user to input the numbers
	cout << "Input five numbers to find their average" << endl;
	
	//inputting variables
	cin >> score1 >> score2>> score3>> score4>> score5;
	
	//Calculate the average of the five numbers
	average = (score1 + score2 + score3 + score4 + score5)/ 5;
	cout << "The average of "<<score1 << ", "<< score2<<", "<<score3<<", "<<score4<<" and "<<score5<<" is "<< average<< endl;
	
	//5. Display the average 
	cout << average;
	
	return 0;
}
