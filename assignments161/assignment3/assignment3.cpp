#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
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
      return true;
  }

  return false;

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
  if((capital < 65) || (capital > 90)){
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
  if(abs(num1-num2) < precision)
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
    if((sentence[i] >= 48) && (sentence[i] <= 57))
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
    if ((sentence[i] >= 97) && (sentence[i] <= 122) || (sentence[i] >= 65) && (sentence[i] <= 90))
      return true;
  }

  return false;

}

/*Function: contains_sub_string
Description: says if substring is in a sentence
Parameters: sentence and substring and bool
Pre: input is two strings
Post: output is a bool
*/

bool contains_sub_string(string sentence, string substring) {
  for(int i=0; i < sentence.length(); i++) {
    int i2 = 0;
    if (sentence[i] == substring[i2]) {
      while(sentence[i] == substring[i2] && i2 < substring.length()) {
        i++;
        i2++;
      }
      if (i2 == substring.length()) {
        return true;
      }
      else {
        return false;
      }
    }
  }
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

/*Function: to_upper
Description: capitalize all letters in a string to capital and leave all non letter characters the same
Parameters: string and string
Pre: input is a string
Post: output is a string
*/

string to_upper(string sentence) {
  for(int i=0; i < sentence.length(); i++) {
    if((sentence[i] > 96) && (sentence[i] < 123))
      sentence[i] = sentence[i] - 32;
    }

    return sentence;

}

/*Function: to_lower
Description: make all uppercase letters lowercase
Parameters: string and string
Pre: input is a string
Post: output is a string
*/

string to_lower(string sentence) {
  for(int i=0; i < sentence.length(); i++) {
    if((sentence[i] > 64) && (sentence[i] < 91))
      sentence [i] = sentence[i] + 32;
  }

  return sentence;

}

/*Function: get_int
Description: take user input until they give you a valid int then return their int Input
Parameters: string and int
Pre: string
Post: int
*/

int get_int(string integer) {
 
 }

int main () {
  const string pass = "PASS";
  const string fail = "FAIL";

   //CHECK RANGE
    cout << "check_range:" << endl;
    int lb = 0;
    int ub = 98;
    int correct_test = 64;
    int incorrect = 100;
    bool check_range_true = check_range(lb, ub, correct_test);
    bool check_range_false = check_range(lb, ub, incorrect);
    printf ("Test 1: lower_bound = %d upper_bound = %d test_value = %d \n", lb, ub, correct_test);
    cout << "Test 1:";
    if (check_range_true)
        cout << pass << endl;

      else
        cout << fail << endl;

    printf("Test 2: lower_bound = %d upper_bound = %d test_value = %d \n", lb, ub, incorrect);
    cout << "Test 2:";
    if(!check_range_false)
      cout << fail << endl;
    //this is saying "if not true, return a pass"

    else
      cout << pass << endl;
    cout << endl;

   //IS INT
    cout << "is_int:" << endl;
    string test1 = "1234";
    string test2 = "1.4";
    bool is_int_true = is_int(test1);
    bool is_int_false = is_int(test2);
    printf ("Test 1: correct_int = %s \n", test1.c_str());
    cout << "Test 1:";
    if(is_int_true)
      cout << pass << endl;

    else 
      cout << fail << endl;

   printf("Test 2: incorrect_int = %s \n", test2.c_str());
   cout << "Test 2:";
    if(!is_int_false)
      cout << fail << endl;

    else 
      cout << pass << endl;
    cout << endl;

   //IS FLOAT
    cout << "is_float:" << endl;
    cout << "Test 1: 3.456" << endl;
    if(is_float("3.456"))
      cout << pass << endl;

    else
      cout << fail << endl; 

    cout << "Test 2: hello" << endl;
    if(is_float("hello")) 
      cout << pass << endl;

    else
      cout << fail << endl;
    cout << endl;

//IS CAPITAL
    cout << "is_capital:" << endl;
    cout << "Test 1: A" << endl;
    if(is_capital('A'))
      cout << pass << endl;

    else 
      cout << fail << endl;

    cout << "Test 2: b" << endl;
    if(is_capital('b'))
      cout << pass << endl;

    else 
      cout << fail << endl;
    cout << endl;

//IS EVEN
    cout << "is_even:" << endl;
    cout << "Test 1: 2" << endl;
    if(is_even(2))
      cout << pass << endl;

    else 
      cout << fail << endl;

    cout << "Test 2: 103" << endl;
    if(is_even(103))
      cout << pass << endl;

    else
      cout << fail << endl;
    cout << endl;

//IS ODD
    cout << "is_odd:" << endl;
    cout << "Test 1: 1" << endl;
    if(is_odd(1)) 
      cout << pass << endl;

    else
      cout << fail << endl;

    cout << "Test 2: 1290490" << endl;
      if(is_odd(1290490))
        cout << pass << endl;

      else 
        cout << fail << endl;
    cout << endl;

//EQUALITY TEST
    cout << "equality_test:" << endl;
    cout << "Test 1: 1, 1" << endl;
    if(equality_test(1, 1)) 
      cout << pass << endl;

    else 
      cout << fail << endl;

    cout << "Test 2: 2, 1" << endl;
    if(equality_test(2, 1)) 
      cout << pass << endl;

    else 
      cout << fail << endl;
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

    cout << "to_upper:" << endl;
    cout << to_upper("hello") << endl;
    cout << to_upper("23ab") << endl;
    cout << to_upper("my name is grace") << endl;
    cout << endl;

    cout << "to_lower:" << endl;
    cout << "Test 1: HELLO" << endl;
    cout << to_lower("HELLO") << endl;
    cout << "Test 2: I AM 3 YEARS OLD" << endl;
    cout << to_lower("I AM 3 YEARS OLD") << endl;
    cout << endl;

    cout << "contains_sub_string:" << endl;
    cout << "Test 1: animals are cute, animals" << endl;
    cout << contains_sub_string("animals are cute", "animals") << endl;
    cout << "Test 2: animals are cute, dogs" << endl;
    cout << contains_sub_string("animals are cute", "dogs") << endl;
    cout << endl;


    return 0;
}
