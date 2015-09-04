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
  Option 2: With 3 if statements and 3 more variables
/*
int main()
{
  int num1;
  int num2;
  int num3;
  int first;
  int second;
  int third;

  cout << "Please input 3 numbers seperated by a space: ";
  cin >> num1 >> num2 >> num3;

  first = num1;
  second = num2;
  third = num3;

  if(num2 < num1){
    second = num1;
    first = num2;
  }

  if(num3 < second){
    third = second;
    second = num3;
  }

  if(num3 < first){
    second = first;
    first = num3;
  }

  cout << first << ", " << second << ", " << third << '\n';

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
