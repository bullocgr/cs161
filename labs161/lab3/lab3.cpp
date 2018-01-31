#include <iostream> 
#include <stdlib.h> 
#include <time.h>
#include <string>
using namespace std;

int main () {
	int length, letters, uppercase, num_upper, lowercase, num_lower, numbers, num;
	string password;
	srand(time(NULL));

	cout << "Welcome to password generator!" << endl;
	cout << "How long do you want the password to be?" << endl;
	cin >> length;
	cout << "Do you want letters? (no=0, yes=1)" << endl;
	cin >> letters;
	cout << "Do you want uppercase letters?" << endl;
	cin >> uppercase;
	cout << "How many characters should be uppercase?" << endl;
	cin >> num_upper;
	cout << "Do you want lowercase letters?" << endl;
	cin >> lowercase;
	cout << "How many should be lowercase?" << endl;
	cin >> num_lower;
	cout << "Do you want numbers?" << endl;
	cin >> numbers;
	cout << "How many numbers should be in the password?" << endl;
	cin >> num;

	string new_character;

	for(int i=0; i<num_upper; i++) {
		new_character = (rand()%26) + 64;
		password.append(new_character); 
	}

	for (int i=0; i<num_lower; i++) {
		new_character = (rand()%26) + 97;
		password.append(new_character);
	}

	for (int i=0; i<num; i++) {
		new_character = (rand()%10) + 48;
		password.append(new_character);
	}
	cout << "Your random password is: " << password << endl;
}