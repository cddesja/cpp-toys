/*
  This it the generic letter template writer 2000. Guaranteed to make your friends know how much you miss/love them!
*/

#include "std_lib_facilities.h"

int main(){

  // definitions and declarations
  string first_name;
  string friend_name;
  char friend_sex = '0';
  int recip_age = 0;
  cout << "Enter the name of the person you want to write to: ";
  cin >> first_name;
  cout << "Can you type the name of one of your near and dear friends? ";
  cin >> friend_name;
  cout << "If you friend is female type 'f', if your friend is male type 'm'. ";
  cin >> friend_sex;
  cout << "How old is the person you are writing to (in years)? ";
  cin >> recip_age;
  if(recip_age <= 0 | recip_age >= 110)
    simple_error("You're kidding about the age! I am going to terminate this now!");

  // The letter template
  cout << "\n\nDear " << first_name << ",\n\n"
    << "\tHow are you doing? I am fine. I miss you tons. Can you believe how long it has been? I can hardly believe it. "
    << "Have you seen " << friend_name << " lately?";
  if(friend_sex == 'm')
    cout << " If you see " << friend_name << " please ask him to call me.";
  if(friend_sex == 'f')
    cout << " If you see " << friend_name << " please ask her to call me.";
  cout << " I hear you just had a birthday and you are " << recip_age << " years old!";
  if(recip_age > 0 & recip_age < 12)
    cout << " Next year you will be " << recip_age + 1 << '.';
  if(recip_age == 17)
    cout << " Next year you will be able to vote!";
  if(recip_age > 70 & recip_age < 110)
    cout << " I hope you are enjoying retirement.";
  cout << "\n\nYours sincerely,\n\n";
}
