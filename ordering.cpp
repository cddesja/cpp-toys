#include "std_lib_facilities.h"
/*
  Order numbers
*/
int main()
{
  int num1;
  int num2;
  int num3;

  cout << "Please input 3 numbers seperated by a space: ";
  cin >> num1 >> num2 >> num3;
  if(num1 <= num2 & num2 <= num3)
    cout << num1 << ", " << num2 << ", " << num3 << '\n';
  if(num1 <= num3 & num3 <= num2)
    cout << num1 << ", " << num3 << ", " << num2 << '\n';
  if(num2 <= num1 & num1 <= num3)
    cout << num2 << ", " << num1 << ", " << num3 << '\n';
  if(num2 <= num3 & num3 <= num1)
    cout << num2 << ", " << num3 << ", " << num1 << '\n';
  if(num3 < num1 & num1 <= num2)
    cout << num3 << ", " << num1 << ", " << num2 << '\n';
  if(num3 < num2 & num2 <= num1)
    cout << num3 << ", " << num2 << ", " << num1 << '\n';
  }

/*
Order strings
*/
// int main()
// {
//     string num1;
//     string num2;
//     string num3;
//
//     cout << "Please input 3 names seperated by a space: ";
//     cin >> num1 >> num2 >> num3;
//     if(num1 <= num2 & num2 <= num3)
//       cout << num1 << ", " << num2 << ", " << num3 << '\n';
//     if(num1 <= num3 & num3 <= num2)
//       cout << num1 << ", " << num3 << ", " << num2 << '\n';
//     if(num2 <= num1 & num1 <= num3)
//       cout << num2 << ", " << num1 << ", " << num3 << '\n';
//     if(num2 <= num3 & num3 <= num1)
//       cout << num2 << ", " << num3 << ", " << num1 << '\n';
//     if(num3 < num1 & num1 <= num2)
//       cout << num3 << ", " << num1 << ", " << num2 << '\n';
//     if(num3 < num2 & num2 <= num1)
//       cout << num3 << ", " << num2 << ", " << num1 << '\n';
// }
