//displaying factors

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	
	cout<<"Enter a number to find it's factors: ";
	cin>>n;
	
	for (int i=1; i<=(n/2); i++ ) 
	{
		if(n%i==0)
		cout<<setw(2)<<i;
	}
}
