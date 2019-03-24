#include<iostream>
using namespace std;
int main() 
{
	double sp;
	cout << "Input selling price" << endl;
	cin >> sp;
	double tax = sp * 0.06;
	cout << "sales tax is " <<int(tax);
	return 0;
}
