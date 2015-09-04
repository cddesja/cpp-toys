#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first and last name followed by your age\n";
  string first_name = "???"; // if name is unspecified
  string last_name = "???"; // again if name is unspecified
  double age = 0.0; // if age is unspecified
  cin >> first_name >> last_name >> age;  // just like cout can link cin, saves typing
  cout << "Hi " << first_name << " " << last_name << ", you are " << age << " years old, which is " << age * 12 << " months old or " << age * 365 << " days.\n";
  return 0;
}
