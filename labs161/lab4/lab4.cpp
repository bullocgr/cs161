#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <cstdlib>
using namespace std;

/*int a_to_i(char character) {
  if(character >= 48 && character <= 57)
    return int(character) - 48;
  return 0;
}
*/
int a_to_i(char character) {
    return char(character);
}


char i_to_a(int value) {
  return (value);
}

int main() {
  cout << a_to_i('a') << endl;
  cout << a_to_i('1') << endl;
  cout << a_to_i('4') << endl;
  cout << a_to_i('z') << endl;

  cout << i_to_a(33) << endl;
  cout << i_to_a(67) << endl;
  cout << i_to_a(122) << endl;
}
