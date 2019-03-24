#include<iostream>
#include<string>
#include<iomanip> 
#include<fstream>
using namespace std;

int main()
{
	string Num;
	
	ofstream output;
	
	output.open("numbers.txt");
	
	
	cout<<"Input a number to find out if it's a palindrome number: ";
	cin>>Num;
	
	bool d = Num.at(0) == Num.at(2), e = Num.at(2) == Num.at(0);                                   
	if (d==e)
	cout<<Num<<" is a palindrome number"<<endl;
	else
	cout<<Num<<" is not a palindrome number"<<endl;
	
 
}  
