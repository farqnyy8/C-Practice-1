//This is the first asssignment by Faruq Hammed.

#include<iostream>
using namespace std;

int main()
{
	//Declaring varibles
	float score1, score2;
	//Prompting user to input first variable
	cout << "Enter Score1:";
	//inputting first variable
	cin >> score1;
	//Prompting user to input second variable
	cout << "Enter Score2:";
	//inputting second variable
	cin >> score2;
	//Final Output setup
	cout << "---------------------------------\n* Score1 \t\t Score2 *\n*\t\t\t\t*\n*\t\t\t\t*\n";
	cout << "* "<<score1<<"------------------------"<<score2<<" *"<< endl;
	cout << "---------------------------------";
	return 0;
}
