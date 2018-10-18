#include <string.h>
#include <cstdlib>
#include <iostream>
using namespace std;

/*Function: get_string
Description: this function just takes in a string
Parameters: does not output anything but takes in a string
Pre-conditions: take in a string
Post-conditions: does not output anything
*/

void get_string(char *input){
	cin.getline(input, 256);
}

/*Function: set_replace_string
Description: this replaces all the spaces with dashes
Parameters: take in the string from get string
Pre-conditions: string must be a string
Post-conditions: does not output anything
*/

void set_replace_string(char * input, char *copy){
	for(int i = 0; input[i] != '\0'; i++){
		copy[i] = input[i];
	}

	for(int i = 0; input[i] != '\0' ; i++){
		if(input[i] != '-' && input[i] != ' ')
			copy[i] = '-';
	}

	for(int i = 0; input[i] != '\0'; i++)
		cout << copy[i];

	cout << '\n';
	//putchar('\n'); this is to break the line
}

/*Function: get_search_replace
Description: this counts how many of the char the user inputs is in the original string and then replaces the dash in the second string with where that letter is
Parameters: take in char and string
*/

int get_search_replace(char letter, char * input, char * copy){
	int count = 0;
	for(int i = 0; input[i] != '\0' ; i++){
		if(input[i] ==  letter){
				copy[i] = letter;
				count ++;
		}
	}

	return count;
}

int main(){
	char input[256];
	char copy[256];
	char letter;

	cout << "Please enter a string: ";
	
	get_string(input); //& gives you a memory address
	set_replace_string(input, copy);

	// bool game = false

	// while(!game) {
		cout << "Please enter a character: ";
		cin >> letter;
		cout << get_search_replace(letter, input, copy) << endl;
		cout << copy << endl;
}