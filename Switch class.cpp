/*
Write a C++ program to create the following
menu:
Please select form the menu:
1. French Fries.................$5.00
2. Caesar Salad...............$8.00
3. Mushroom Soup........$10.00
Enter you choice here=>
Then find the total cost for the meal.
*/
#include <iostream>
using namespace std;

int main() 
{
  //local var
  int order;
  double total=0;

  //code

  do
  {
    system("cls");
    cout<<"Please select form the menu:\n1. French fries.................$5.00\n2. Caesar Salad...............$8.00\n3. Mushroom Soup........$10.00\n"<<endl;
    cout<<"Enter you choice here=> ";
    cin>>order;

    switch(order)
    {
      case 1: total+=5.99;break;
      case 2: total+=8.50;break;
      case 3: total+=10.00;break;
      case 4: system("exit"); break;
      default: cout<<"Invalid order, Please order again.";
    }
  }while(order!=4);
  
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
	
  cout<<"\nTotal: $"<<total<<endl;
}
