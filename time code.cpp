#include<iostream>
#include<ctime>
using namespace std;
int main()
{ 
	int totalsecond = time(0);
	int currentsecond = totalsecond % 60;
	int totalminute = totalsecond / 60;
	int currentminute = totalminute % 60;
	int totalhour = totalminute / 60;
	int currenthour = totalhour % 24;
	currenthour = currenthour - 5;
	cout <<"Current time is " << currenthour <<":"<< currentminute <<":"<< currentsecond <<endl;
	return 0;
}
