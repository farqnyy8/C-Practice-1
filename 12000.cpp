#include <iostream>

using namespace std;

int main() 
{
  int i, pos, neg, sum, j, k;
  
  cout<<"Enter an integer, the input ends if it is 0: \n";

  cin>>k;
  if(k!=0)
  {
    neg=0;
    pos=0;
    sum=k;
    if (k<0)
    neg=1;
    else if(k>0)
    pos=1;
    
    for (j=1; j!=0; j++)
    {
      cin>>i;
      sum+=i;
      if(i==0)
      break;
      else if(i>0)
      pos++;
      else if(i<0)
      neg++;
    }
    cout<<"Stop!\nThe number of positive is "<<pos<<" \nThe number of negatives is "<<neg<<"\nThe total is "<<j<<"\nThe average is "<<sum/float(j-1);
  }
  else if(k==0)
  cout<<"No number entered except 0";
}
