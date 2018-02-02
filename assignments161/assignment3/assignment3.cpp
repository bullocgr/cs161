#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <cstdlib>
using namespace std;

/*Function: check_range
Description: take a lower bound and an upperbound and a final value and tests if that value is in the bounds
Parameters: bool and int
Pre-conditions: the input is an in
Post-conditions: return a bool
*/

bool check_range(int lower_bound, int upper_bound, int test_value) {
  for(int i=0; i >= lower_bound && i <= upper_bound; i++) {
    if(test_value >= lower_bound && test_value <= upper_bound)
      return false;
  }

  return true;

}

/*Function: is_int
Description: take a string of numbers and test whether it's an integer, if it is return true
Parameters: bool and int
Pre-conditions: input is a string
Post-conditions: output is a bool
*/

bool is_int(string num) {
  for(int i=0; i <= num.length(); i++) {
    if((num[i] >= 58) && (num[i] <= 47))
      return false;
    }

    return true;

}

/*Function: is_float
Description: take a string and test whether it's a is_float
Parameters: bool and string
Pre-conditions: input is a string
Post-conditions: output is a bool
*/

/*bool is_float(string fl) {
  for(float i=0; i =< fl.length(); i++) {
    if((fl[i] >= 58) && (fl[i] <= 47))
      return false;
    }

    return true;
}
*/

/*Function: is_capital
Description: take a char and test whether or not it's a capital letter
Parameters: bool and char
Pre: input is a char
Post: output is a bool
*/

bool is_capital(char capital) {
  for(char i=0; i <= capital; i++) {
    if((capital <= 65) && (capital >= 90))
      return false;
  }

  return true;
}

/*Function: is_even
Description: says if an int is an even number
Parameters: bool and int
Pre: input is an int
Post: output is a bool
TO DO::::: make it so 0 is false
*/

bool is_even(int num) {
  for(int i=0; i <= num; i++) {
    if(num % 2 == 0)
      return true;
  }

  return false;
}

/*Function: is_odd
Description: says if an int is an odd number
Parameters: bool and int
Pre: input is an int
Post: output is a bool
*/

bool is_odd(int num) {
  for(int i=0; i <= num; i++) {
    if(num % 2 == 0)
      return false;
  }

  return true;
}

/*Function: word_count
Description: count how many words there are in a string
Parameters: int and string
Pre: input is a string
Post: output is an int
*/

int word_count(string sentence) {
  int value = 1;
  for(int i=0; i < sentence.length(); i++) {
    if(sentence[i] == ' ')
      value++;
  }

  return value;
}


int main () {

    cout << check_range(0, 98, 64) << endl;
    cout << check_range(4, 1, 90) << endl;
    cout << endl;

    cout << is_int("1234") << endl;
    cout << is_int("1.4.3") << endl;
    cout << is_int("hello") << endl;
    cout << endl;

   /* cout << is_float("3.456") << endl;
    cout << is_float("hello") << endl;
    cout << is_float("123") <<endl;
    cout << endl;
    */

    cout << is_capital('A') << endl;
    cout << is_capital('b') << endl;
    cout << is_capital('3') << endl;
    cout << endl;

    cout << is_even(2) << endl;
    cout << is_even(48) << endl;
    cout << is_even(103) << endl;
    cout << is_even(0) << endl;
    cout << endl;

    cout << is_odd(1) << endl;
    cout << is_odd(3939) << endl;
    cout << is_odd(12) << endl;
    cout << is_odd(0) << endl;
    cout << endl;

    cout << word_count("hello") << endl;
    cout << word_count("i enjoy cs") << endl;
    cout << word_count("i like to eat ass") << endl;
    cout << endl;

    return 0;
}
