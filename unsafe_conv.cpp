#include "std_lib_facilities.h"
//
// int main()
// {
//   int a = 20000;
//   char tmp = a;
//   int b = tmp;
//
//   if(a != b){
//     cout << "a (" << a << ") is not equal to b (" << b << ")\n";
//   } else {
//     cout << "a and be are equal!";
//   }
// }

int main()
{
  double d = 0.0;
  while (cin >> d){
    int i = d;
    char c = i;
    int i2 = c;
    char test = 'l';
    cout << "double d ==" << d
         << "\ninteger i == " << i
         << "\nchar(" << c << ")"
         << "\nchar test is == " << test
         << "\ninteger i2 == " << i2 << '\n';
  }
  return 0;
}
