//this is a program to compute the area ans circumference of a circle 

#include<iostream>
using namespace std;
int main()
{
	double radius, area, circumference;
 	const double pi = 3.14159;
	
	cout << "Please input the radius of the circle" << endl;
	cin >> radius;
	area = radius * radius * pi;
	circumference = 2 * radius * pi;
	cout << "The area and circumference of the circle are " << area << "units squared and " << circumference << "units respectively" << endl;
} 
