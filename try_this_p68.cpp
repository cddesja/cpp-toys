#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter an integer: ";
  int n;
  cin >> n;
  cout << "n == " << n
       << "\nn + 1 == " << n + 1
       << "\nthree times n == " << n * 3
       << "\ntwice n == " << n + n
       << "\nn squared == " << n * n
       << "\nhalf of n == " << n / 2;
       n *= 2;
  cout << "\nn * 2 and geting reassigned == " << n
       << "\nremainder after dividing by 2 == " << n % 2;
  double sqrtn = n;
  cout << "\nsquare root of n == " << sqrt(sqrtn)
       << '\n';
}
