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
  for(int i=0; i < num.length(); i++) {
    if((num[i] <= 48) || (num[i] >= 57))
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

bool is_float(string fl) {
  for(float i=0; i < fl.length(); i++) {
    if((fl[i] >= 58) && (fl[i] <= 47) || (fl[i] == 46))
      return true;
    }

    return false;
}


/*Function: is_capital
Description: take a char and test whether or not it's a capital letter
Parameters: bool and char
Pre: input is a char
Post: output is a bool
*/

bool is_capital(char capital) {
  if(((int)capital < 65) || ((int)capital > 90)){
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

/*Function: equality_test
Description: says if two ints are equal
Parameters: int and int
Pre: input is two ints
Post: output is an int
*/

int equality_test(int num1, int num2) {
  if(num1 - num2 < 0) {
    return (-1);
  }

  if(num1 - num2 == 0) {
    return 0;
  }

  else { 
    return 1;
  }

}

/*Function: float_is_equal
Description: tests if two floats are equal to eachother
Parameters: float and bool and float precision
Pre: input is a float
Post: output is a bool
*/

bool float_is_equal(float num1, float num2, float precision) {
  if(num1-num2 < precision)
    return true;

  else {
    return false;
  }

}

/*Function: numbers_present
Description: if a string has numbers return true
Parameters: string and bool
Pre: input is a string
Post: output is a bool
*/

bool numbers_present(string sentence) {
  for(int i = 0; i < sentence.length(); i++) {
    if(((int) sentence[i] >= 48) && ((int) sentence[i] <= 57))
      return true; 
  }

    return false;
  
}

/*Function: letters_present
Description: if a string has letters return true
Parameters: string and bool
Pre: input is a string
Post: output is a bool
*/

bool letters_present(string sentence) {
  for (int i = 0; i < sentence.length(); i++) {
    if (((int) sentence[i] >= 97) && ((int) sentence[i] <= 122) || ((int) sentence[i] >= 65) && ((int) sentence[i] <= 90))
      return true;
  }

  return false;

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

    cout << "check_range:" << endl;
    cout << check_range(0, 98, 64) << endl;
    cout << check_range(4, 1, 90) << endl;
    cout << endl;

    cout << "is_int:" << endl;
    cout << is_int("1234") << endl;
    cout << is_int("1.4.3") << endl;
    cout << is_int("hello") << endl;
    cout << endl;

    cout << "is_float:" << endl;
    cout << is_float("3.456") << endl;
    cout << is_float("hello") << endl;
    cout << is_float("123") <<endl;
    cout << endl;
    
    cout << "is_capital:" << endl;
    cout << is_capital('A') << endl;
    cout << is_capital('b') << endl;
    cout << is_capital('3') << endl;
    cout << endl;

    cout << "is_even:" << endl;
    cout << is_even(2) << endl;
    cout << is_even(48) << endl;
    cout << is_even(103) << endl;
    cout << is_even(0) << endl;
    cout << endl;

    cout << "is_odd:" << endl;
    cout << is_odd(1) << endl;
    cout << is_odd(3939) << endl;
    cout << is_odd(12) << endl;
    cout << is_odd(0) << endl;
    cout << endl;

    cout << "equality_test:" << endl;
    cout << equality_test(1, 1) << endl;
    cout << equality_test(2, 1) << endl;
    cout << equality_test(1, 2) << endl;
    cout << endl;

    cout << "float_is_equal:" << endl;
    cout << float_is_equal(1.02, 1.01, 0.01) << endl;
    cout << float_is_equal(5.0, 4.01, 0.01 ) << endl;
    cout << endl;

    cout << "numbers_present:" << endl;
    cout << numbers_present("913") << endl;
    cout << numbers_present("a9n") << endl;
    cout << numbers_present("hello") << endl;
    cout << endl;

    cout << "letters_present:" << endl;
    cout << letters_present("3904m") << endl;
    cout << letters_present("hello") << endl;
    cout << letters_present("37.84") << endl;

    cout << "word_count: " << endl;
    cout << word_count("hello") << endl;
    cout << word_count("i enjoy cs") << endl;
    cout << word_count("i like to eat ass") << endl;
    cout << endl;

    return 0;
}
