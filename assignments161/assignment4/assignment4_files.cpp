#include "header.h"
using namespace std;

void calculator() {
	string input = "";
	// cout << "Enter what you want to calculate: ";
	getline(cin, input);

	for(int i = 0; i < input.length(); i++) {
		if(input[i] == '.' || input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] >= '0' && input[i] <= '9' || input[i] == ' ') {
			continue;
		}

	else{
		cout << "Please enter a valid input: ";
		break;
	}
}

int original = 0, final = 1;
bool num = false;

for (int i = 0; i < input.length(); i++) {
	if(input[i] == ' ' && num == false)
		continue;
}

cout << "This function is out of order." << endl;

}


/*Function: binary
Description: checks if an int input is just 1's and 0's. This is used for error handling
Parameters: bool and long
Pre-conditions: the input must be numbers
Post-conditions: the output would then be a bool
*/

bool binary(long num) {
	int bi = num % 10;
	do{
		if(bi > 1){
			return false;
		}
		num /= 10;
		bi = num % 10;
	}while(bi > 0);

		return true;
}

/*Function: Convert binary to decimal
Description: Converts a binary number to a decimal number
Parameters: int and int
Pre-conditions: input must be an int
Post-conditions: output will be an int
*/

int bi_to_de() {
	int base = 1, value = 0, num;

	cout << "Enter the binary number you want to convert: ";
	cin >> num;
	binary(num);

	while(binary(num) == false) {
		cout << "Re-enter a valid binary number: ";
		cin >> num;
	}

	while(num) {
		int last = num % 10;
		num = num / 10;
		value += last * base;
		base = base * 2;
	}

	return value;
}

/*Function: check_bin
Description: take a string of numbers and test whether it's an integer, if it is return true
Parameters: int and int
Pre-conditions: input is an int
Post-conditions: output is an int
*/

int check_bin(int num) {
	for(int i = 0; i < num; i++) {
		if (num == '.') {
			cout << "Please re-enter a valid decimal number: ";
			cin >> num;	
		}
    }

    return num;
}


/*Function: Convert decimal to binary
Description: converts a decimal number to a binary number
Parameters: int and int
Pre-conditions: the input is an int
Post-conditions: the output is an int
*/


int de_to_bi() {
	long remainder, base = 1, binary = 0, num;
	cout << "Enter the decimal number you want to convert to binary: ";
	cin >> num;
	check_bin(num);

	while(num >= 1) {
		remainder = num % 2;
		num /= 2;
		binary += remainder * base;
		base *= 10;
	}

	return binary;
}

/*Function: grading
Description: average the test scores and apply a weight if needed
Parameters: input is a float and the output is a float
Pre-conditions: input must be a float
Post-conditions: output will be a float
*/

float grading(float num) {
	int sum = 0, average, test;
	cout << "Enter how many tests you are taking the average of: ";
	cin >> test;
	cout << "Enter the scores of each test: ";

	for(int i = 0; i < test; i++) {

		cin >> num;

		sum += num;
		average = sum / test;
	}

	cout << average << endl;

	float weight;
	char answer;

	cout << "Would you like to weight the average (y/n)?" << endl;
	cin >> answer;

	switch(answer) {
		case 'y':
		cout << "Weight: ";
		cin >> weight;
		average *= weight;
		cout << "The weight is: " << average << endl;
		break;

		case 'n':
		cout << "Your final average is: " << average << endl;
		break;
	}
}

/*Function: welcome
Description: menu layout for the calculator
Parameters: input is an int
Pre-conditions: input must be an int
Post-conditions: output is nothing
*/

void welcome() {
	float num;
	char function;
	   cout << "Choose which calculation you would like to be done:\n1) Regular calculations\n2) Binary to decimal conversions\n3) Decimal to binary conversions\n4) Grading calculator" << endl;
	   cin >> function;

	 	  switch(function) {
	 	  	case '1':
	   			calculator();
	   			break;

	  	 	case '2':
	   			cout << bi_to_de() << endl;
	   			break;
	   		
	  	 	case '3':
	  	 		cout << de_to_bi() << endl;
	   			break;

	  	 	case '4': 
			   	cout << grading(num) << endl;
	   			break;

	   		default:
	   			function;
	   			break;
	   		}	

}

