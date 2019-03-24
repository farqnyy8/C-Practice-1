//This is a program to find the new salary of employees in an organisation  after taking a promotion examination 
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	//Declaring variables
	string name;
	double score, fpay, npay;
	
	//Prompting the users to input their names
	cout << "Dear Company employee, input your full name."<< endl;
	getline (cin,name);
	
	//Prompting the users to input their scores
	cout <<name<<", Input your score on the promotion exam." << endl;
	cin >> score;
	
	//for scores more than seventy-nine
	if (score>=80)
	{
		//for scores greater than ninety
		if (score >= 90)
		{ 
			//for scores greater than ninety-five
			if (score >= 95)
				{
					cout <<name<<", input your former salary" << endl;
					//input former salary
					cin >> fpay;
					npay = fpay * 1.1;
					//conclusion
					cout << name << ", your new salary is "<<setprecision(20)<<showpoint<< npay<<" and you have being awarded a new car"<< endl;
				}
			//score greater than ninety but less than ninety-five
			else if (score < 95)
				{
					cout <<name<<", input your former salary" << endl;
					//input former salary
					cin >> fpay;
					npay = fpay * 1.075;
					//conclusion
					cout << name <<", your new salary is "<<setprecision(20)<<showpoint<< npay<< "and you have being awarded a new motorcycle"<< endl;
				}
		}
		//for scores less than ninety but greater than or equal to eighty
		else
		{
			cout <<name<<", input your former salary" << endl;
			//input former salary
			cin >> fpay;
			npay = fpay * 1.05;
			//conclusion
			cout <<name<< ", your new salary is "<<setprecision(20)<<showpoint<<npay
			<< "and you have being awarded a new bicycle"<< endl;
		}
	}
	//for scores less than eighty
	else
	{
		cout << name << ", you did poorly on the promotion exam and you have to " 
		<<"retake it else you would not get a promotion in this company.";
	}
	return 0;
}
