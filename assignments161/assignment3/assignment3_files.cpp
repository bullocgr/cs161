  #include "header.h"
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
 
int get_int(string prompt) {
    int return_int = 0;
    string num = "";
    cout << prompt << endl;
    getline(cin, num);
    
    do{
      if(is_int(num) == true)
        break;
      printf("Invalid input, please input another: \n");
      getline(cin, num); 

    } while(true);

    for(int i=0; i < num.length(); i++){
      return_int *= 10;
      return_int += (int(num[i]) - 48);
    }
    return return_int;

}

/*Function: get_float
Description: take user input until they give you a valid float
Parameters: string and float
Pre: input is string
Post: output is a float
*/

float get_float(string prompt) {
  float return_float = 0.00;
  float temp = 0.00;
  int float_divider = 10;
  bool in_decimal = false;
  string num ="";
      
  cout << prompt << endl;
  getline(cin, num);

  do{
    if(is_float(num) == true)
      break;
    printf("Invalid float, please input another: \n");
    getline(cin, num);
  } while(true);

  for(int i =0; i <num.length(); i++){
    if(num[i]!= 46 && in_decimal == false){
      return_float *= 10;
      return_float+= (int(num[i]) - 48);
    }

  else if(num[i] == 46){
    in_decimal = true;

  }

  else if(in_decimal == true && num[i] != 46){
    temp = (int(num[i]) - 48);
    temp /= float_divider;
    return_float += temp;
    float_divider *= 10;
  }
  }

  return return_float;
}