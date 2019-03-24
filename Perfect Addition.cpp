//Helping a elementary school student practice Subtraction.

//including libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//function
int main() 
{
  //declaring variables
  srand(time(0));
  short num1, num2, temp, cv, dv, sumu, sumc, ftime, itime, correct;
  float count;

  
  //initialing variables
  correct = 0;
  count = 0;
  
  //begining time
  itime = time(0);
  
  cout<<"\nInstruction: inputting a letter stops the program\n"; 
  
  do 
  {
	//generating random numbers between zero and one hundred inclusive.
	num1 = rand() % 101;
    num2 = rand() % 101;
  
  //sum of two numbers
    sumc = num1 + num2;
    
	//prompting user for input
    cout<<"\nFind the sum of "<<num1<<" and "<<num2<<": ";
    cin>>sumu;
    
	//selection
	if(sumc == sumu)
    {
      dv=1;
      correct++;
    } 
    else if ((sumc!=sumu)&&(sumu!=0))
    {
      dv=2;
    }
    else if(int(sumu)-'a'<= 25)
    {
      dv=0;
    }
    
  switch(dv)
  {
    case 0:cv=0;break;
    case 1:cv=1;cout<<"Correct! Go on.\n"<<endl;break;
    case 2:cv=1;cout<<"Wrong! The sum of "<<num1<<" and "<<num2<<" is "<<sumc<<"."<<endl;break;
  }
  
  //number of questions answered
	count++;
  }while(cv!=0);
  
  //final time 
  ftime = time(0);
  
  //conclusions 
  cout<<"\nYou got "<<correct<<" questions correct out of "<<(count-1)<<" and you spent "<<(ftime-itime)<<" seconds and your average speed was "<<((count-1)/(ftime-itime))<<" questions per second."<<endl;
  cout<<"\nYou were "<<((correct/(count-1))*100)<<" percent correct.";
  
  return 0;
}
