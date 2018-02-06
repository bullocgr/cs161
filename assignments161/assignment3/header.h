#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
using namespace std;

bool check_range(int lower_bound, int upper_bound, int test_value);
bool is_int(string num);
bool is_float(string fl);
bool is_capital(char capital);
bool is_even(int num);
bool is_odd(int num);
int equality_test(int num1, int num2);
bool float_is_equal(float num1, float num2, float precision);
bool numbers_present(string sentence);
bool letters_present(string sentence);
bool contains_sub_string(string sentence, string substring);
int word_count(string sentence);
string to_upper(string sentence);
string to_lower(string sentence);
int get_int(string prompt);
float get_float(string prompt);

