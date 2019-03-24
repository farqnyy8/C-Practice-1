//finding the gcd of two numbers

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num1, num2, d, count;
	
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	d=min(num1, num2);
	count=0;
	
	for (int i=d; i>=1; i--)
	{
		if (num1%i==0 && num2%i==0)
		
		{
			cout<<i;
			break;
		}
	}
	
	
	return 0;
}
