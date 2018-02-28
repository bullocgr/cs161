
#include <iostream>
using namespace std;

/*Function: get_string
Description: this function just takes in a string
Parameters: does not output anything but takes in a string
Pre-conditions: take in a string
Post-conditions: does not output anything
*/

void get_string(string *input){
	getline(cin, *input);
}

/*Function: set_replace_string
Description: this replaces all the spaces with dashes
Parameters: take in the string from get string
Pre-conditions: string must be a string
Post-conditions: does not output anything
*/

void set_replace_string(string input, string *copy){
	*copy = input;
	for(int i = 0; i < input.length(); i++){
		if(input[i] != '-' && input[i] != ' ')
			(*copy)[i] = '-';
	}
	cout << *copy << endl;
}

/*Function: get_search_replace
Description: this counts how many of the char the user inputs is in the original string and then replaces the dash in the second string with where that letter is
Parameters: take in char and string
*/

int get_search_replace(char letter, string input, string &copy){
	int count = 0;
	for(int i = 0; i < input.length(); i++){
		if(input[i] == letter){
				copy[i] = letter;
				count ++;
		}
	}

	return count;
}

int main(){
	string input, copy;
	char letter;
	cout << "Please enter a string: ";
	get_string(&input); //& gives you a memory address

	set_replace_string(input, &copy);

	cout << "Please enter a character: ";
	cin >> letter;
	cout << get_search_replace(letter, input, copy) << endl;
	cout << copy << endl;
}