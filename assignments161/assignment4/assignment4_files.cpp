#include "header.h"
using namespace std;

void calculator() {
	float previous, current, total;
	char op;
	cout << "Enter what you want calulated: ";
	cin >> previous;
	current = 1;
	while(current) {
		cin >> op;
		cout << op << endl;
		cin >> current;
		cout << current << endl;
		switch(op){
			case '+':
				previous += current;
		}
		cout << previous << endl;

	}
	cout << previous << endl;
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
	long base = 1, value = 0, num;

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

/*Function: decimal
Description: checks if a number is a decimal number. used for error handling
Parameters: bool and int
Pre-conditions: the input must be a string of numbers
Post-conditions: output will be a bool
*/

bool decimal(long num) {
	do{
		if(num != '.')
			break;
		cout << "Please enter a valid binary number: ";
		cin >> num;
	} while(num == '.');

	return 0;
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
	decimal (num);

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

void welcome(int function) {
	float num;
	string input;

  do {
	   cout << "Choose which calculation you would like to be done:\n1) Regular calculations\n2) Binary to decimal conversions\n3) Decimal to binary conversions\n4) Grading calculator" << endl;
	   cin >> function;

	 	  switch(function) {
	 	  	case 1:
	   			calculator();
	   			break;

	  	 	case 2:
	   			bi_to_de();
	   			break;
	   		
	  	 	case 3:
	  	 		de_to_bi();
	   			break;

	  	 	case 4: 
			   	grading(num);
	   			break;

	   		default:
	   			function;
	   			break;
	   		}	

	}while(function);

}


