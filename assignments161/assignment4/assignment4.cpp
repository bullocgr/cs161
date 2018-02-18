#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;


// string calculation;
// int num1, num2;

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

/*Function: Convert binary to decimal
*/

//loop it to see if each value is 1 or 0

// int bi_to_de() {
// 	int value = 0, base = 1;
// 	string bi = "";
// 	cout << "Please enter a binary number: ";
// 	cin >> bi;

// 	do {
// 		if(binary(bi) == true)
// 			break;
// 		cout << "Please enter a valid input: ";
// 		cin >> bi;
// 	} while(true);

// 	int i = bi.length()-1;
	
// 	for(i; i >= 0; i--) {
// 		int last = bi[i];
// 		value += last * base;
// 		base *= 2;
// 	}
	//first line jumps to the last character in a loop
	//adds 0 and sets that equal to the last value *1
	//multiplies base by *2
	// then decrements i to go to all the way to the 0 value of the string

// 	return value;
// }

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
// DO ERROR HANDLING IN THIS
// go through each number in the int and %2 it, and if there's a remainder then it is not a valid input
// how do i do this


/*Function: Convert decimal to binary
*/

long de_to_bi(int num) {
	long remainder, base = 1, binary = 0;
	cout << "Enter the decimal number you want to convert to binary: ";
	cin >> num;
	while(num>=1) {
		remainder = num % 2;
		num /= 2;
		binary += remainder * base;
		base *= 10;
	}

	return binary;
}

// need error handling

float grading(int num) {
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

void welcome(int function) {
	long num;
	string input;

	cout << "Choose which calculation you would like to be done:\n1) Regular calculations\n2) Binary to decimal conversions\n3) Decimal to binary conversions\n4) Grading calculator" << endl;
	cin >> function;

	if(function == 1) {
		calculator();
	}

	if(function == 2) {
		cout << bi_to_de() << endl;
	}

	if(function == 3) {
		cout << de_to_bi(num) << endl;
	}

	if(function == 4) {
		cout << grading(num) << endl;
	}
	
}




int main(){

	int function;
	char input;
	do{
		welcome(function);
		cout << "Continue computing (y/n): ";
		cin >> input;
	}while(input == 'y');

	return 0;
	
}	

	
