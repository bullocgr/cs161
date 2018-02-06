#include "header.h"
using namespace std;

int main () {
  string num = "";
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
      cout << pass << endl;
    //this is saying "if not true, return a pass"

    else
      cout << fail << endl;
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
      cout << pass << endl;

    else
      cout << fail << endl;
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
      cout << fail << endl;

    else
      cout << pass << endl;
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
      cout << fail << endl;

    else
      cout << pass << endl;
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
      cout << fail << endl;

    else
      cout << pass << endl;
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
        cout << fail << endl;

      else
        cout << pass << endl;
    cout << endl;

//EQUALITY TEST
    cout << "equality_test:" << endl;
    cout << "Test 1: 1, 9" << endl;
    cout << equality_test(1, 9) << endl;

    cout << "Test 2: 1, 1" << endl;
    cout << equality_test(1, 1) << endl;

    cout << "Test 3: 4, 1" << endl;
    cout << equality_test(4, 1) << endl;
    cout << endl;


//FLOAT IS EQUAL
    cout << "float_is_equal:" << endl;
    cout << "Test 1: 1.02, 1.01, 0.01" << endl;
    if(float_is_equal(1.02, 1.01, 0.01))
      cout << pass << endl;

    else
    cout << fail << endl;

    cout << "Test 2: 5.0, 3.01, 1.1 " << endl;
    if(float_is_equal(5.0, 3.01, 1.1))
      cout << fail << endl;

    else
      cout << pass << endl;
    cout << endl;

//NUMBERS PRESENT
    cout << "numbers_present:" << endl;
    cout << "Test 1: a93" << endl;
    if(numbers_present("a93"))
      cout << pass << endl;

    else
      cout << fail << endl;

    cout << "Test 2: hello" << endl;
    if(numbers_present("hello"))
      cout << fail << endl;

    else
      cout << pass << endl;
    cout << endl;

//LETTERS PRESENT
    cout << "letters_present:" << endl;
    cout << "Test 1: hello879" << endl;
    if(letters_present("hello879"))
      cout << pass << endl;

    else
      cout << fail << endl;

    cout << "Test 2: 37.84" << endl;
    if(letters_present("37.84")) 
      cout << fail << endl;

    else
      cout << pass << endl;
    cout << endl;

//WORD COUNT
    cout << "word_count: " << endl;
    cout << "Test 1: hello" << endl;
    cout <<(word_count("hello")) << endl;

    cout << "Test 2: I enjoy cs" << endl;
    cout << (word_count("I enjoy cs")) << endl;
    cout << endl;

//TO UPPER
    cout << "to_upper:" << endl;
    cout << "Test 1: hello" << endl;
    cout << to_upper("hello") << endl;

    cout << "Test 2: 23ab" << endl;
    cout << to_upper("23ab") << endl;
    cout << endl;

//TO LOWER
    cout << "to_lower:" << endl;
    cout << "Test 1: HELLO" << endl;
    cout << to_lower("HELLO") << endl;
    cout << "Test 2: I AM 3 YEARS OLD" << endl;
    cout << to_lower("I AM 3 YEARS OLD") << endl;
    cout << endl;

//CONTAINS SUBSTRING
    cout << "contains_sub_string:" << endl;
    cout << "Test 1: animals are cute, animals" << endl;
    if(contains_sub_string("animals are cute", "animals"))
      cout << pass << endl;

    else 
      cout << fail << endl;

    cout << "Test 2: animals are cute, dogs" << endl;
    if(contains_sub_string("animals are cute", "dogs"))
      cout << fail << endl;

    else 
      cout << pass << endl;
    cout << endl;

//GET INT
    cout << get_int("Please input an integer:");


//GET FLOAT
    cout << get_float("\nPlease input a float:");

}
