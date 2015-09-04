/*
  Repeat word detector
  - This program takes a string of words and detects if the adjacent words are identical
  - Note this program is character-sensitive.
*/
#include "std_lib_facilities.h"

int main()
{
  string previous = " ";
  string current;
  int where = 0;
  int repeat = 0;
  while(cin >> current){
      ++where;
    if(previous == current){
      cout << "You have repeated " << current << " and that was the " << where << "th word in your passage.\n";
      ++repeat;
      }
    previous = current;
  }
  cout << "You repeated a total of " << repeat << " words.\n";
  return 0;
}

// #include "std_lib_facilities.h"
// int main()
// {
//   string s = "Goodbye, cruel world! ";
//   cout << s << '\n';
// }
