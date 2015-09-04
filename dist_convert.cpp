#include "std_lib_facilities.h"
/*
 Distance converter
*/


int main()
{
  double num = 0.0;
  string type = " ";
  cout << "This program will convert between miles and kilometers.\nTo use this first enter a number: ";
  cin >> num;
  cout << "Next if you want to convert to kilometers type km, if you want to convert to miles type mi: ";
  cin >> type;

  if(type == "km")
    cout << "The number of kilometers in " << num << " miles is: " << num * 1.609 << '\n';
  if(type == "mi")
    cout << "The number of miles in " << num << " kilometers is: " << num / 1.609 << '\n';
  if(type != "mi" & type != "km")
    cout << "Please specify the unit you want to convert to!\n";
  return 0;
}
