#include "header.h"
using namespace std;

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

/*Function: operator
Description: checks if an input is an operator
Parameters: bool and char
Pre-conditions: input is a char
Post-conditions: output is a bool
*/

bool operate(char op) {
	if(op == '+' || op == '-' || op == '*' || op == '/')
		return true;

	return false;
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
    cout << "Please enter a valid float: ";
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

/*Function: calculator
Description: take a string input and read through the whole string and do simple math functions with the operator they use
Parameters: int and string
Pre-conditions: the input must be a string
Post-conditions: the output will be an int
*/

void calculator() {
	cout << "I didn't do this part." << endl;
}

// void calculator() {
// 	string user = "";
// 	string caster = "";
// 	float result = 0.00;
// 	string temporary = " ";

// 	cout << "Enter what you want calculated: ";
// 	getline(cin, user);
// 	user += ' ';

// 	for(int x = 0; x < user.length(); x++)
// 		temporary += user[x];
// 	user = temporary;


// 	for (int i = 0; i < user.length(); i++) {
// 		if (user[i] == '.' || user[i] == '+' || user[i] == '-' || user[i] == '*' || user[i] == '/' || (user[i] >= '0' && user[i] <= '9') || user[i] == ' ') {
// 			continue;
// 		}

// 		else {
// 			cout << "Please re-enter a valid input: ";
// 			break;
// 		}
// 	}

// 	int original = 0;
// 	int final = 1;
// 	bool in = false; //inside a number
// 	int temp = 0;
// 	char op = '0';
// 	bool first_time = true; //adds the number to the first result which is 0

// 	//user[i] and caster are same but caster is a string


// 	for (int i = 0 ; i < user.length(); i++) {
// 		caster = "";
// 		caster += user[i];

		
// 		if (user[i] == ' ' && in == false)
// 			continue; //skip to the end of the loop

// 		else if (is_int(caster) && in == false) {
// 			original = i;
// 			in = true; //no idea what's going on here
// 		}

// 		else if (user[i] == ' ' && in == true) {
// 			in = false;
			
// 			final = i - 1;
			
// 		}

// 		if (operate(user[i]) && in == false ) {
// 			op = user[i]; //storing operator in the array
// 		}

// 		if (original != 0 && final != 1) {
// 			string ints = "";
// 			for (int k = original; k <= final; k++) {
// 				ints += user[k]; //store in string that will be converted to all ints
// 			}

// 			temp = get_float(ints);

// 			if (first_time == true){
// 				result += temp;
// 				first_time = false;
// 			} 

// 			else {
// 				switch (op) {
// 					case '+': 
// 						result += temp;
// 					break;

// 					case '-': 
// 						result -= temp;
// 					break;

// 					case '*':
// 						result *= temp;
// 					break;

// 					case '/': 
// 						result /= temp;
// 					break;
// 				}
// 			}

// 			original = 0;
// 			final = 1;
// 		}
// 	}

// 	cout << result << endl;

//}
//This is braam's code, he used it to teach me because I did not know how to do its




/*Function: Convert binary to decimal
Description: Converts a binary number to a decimal number
Parameters: int and int
Pre-conditions: user must be an int
Post-conditions: output will be an int
*/

void bi_to_de() {
	int de = 0;
	string input = check_bin();
	int str = input.length() - 1;

	for(int i = 0; i < input.length(); i++){
		if (input[i] == '1')
			de += pow(2, input.length());
	}

	cout << de << endl;
}


/*Function: check_bin
Description: take a string of numbers and test whether it's an integer, if it is return true
Parameters: int and int
Pre-conditions: user is an int
Post-conditions: output is an int
*/

string check_bin() {
	string input = "";
	bool bin = true;

	do {
		cout << "Please input a valid binary number: ";
		getline(cin, input);
		bin  = true;

		for(int i = 0; input[i] != '\0'; i++){
			if(input[i] != '1' || input[i] != '0')
				bin == false;
			break;
		}
	}while (bin == false);

	return input;
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
      cout << "Please enter a valid integer: ";
      getline(cin, num); 

    } while(true);

    for(int i=0; i < num.length(); i++){
      return_int *= 10;
      return_int += (int(num[i]) - 48);
    }
    return return_int;

}


/*Function: Convert decimal to binary
Description: converts a decimal number to a binary number
Parameters: take input as a string and output a string
Pre-conditions: the user is an int
Post-conditions: the output is an int
*/


void de_to_bi() {
	string input = "";

	do {
		cout << "Please input a decimal number: ";
		getline(cin, input);
		if(is_int(input))
			break;
	} while(true);

	int bi = get_int(input);
	string decimal = "";

	while(bi != 0) {
		decimal.append(1, (bi % 2) + 48);
		bi /= 2;
	}

	for (int i = decimal.length() - 1; i >= 0; i--) {
		cout << bi << endl;
	}
}

/*Function: grading
Description: average the test scores and apply a weight if needed
Parameters: user is a float and the output is a float
Pre-conditions: user must be a float
Post-conditions: output will be a float
*/

void grading(float num) {
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
	return;
}

/*Function: welcome
Description: menu layout for the calculator
Parameters: user is an int
Pre-conditions: user must be an int
Post-conditions: output is nothing
*/

int welcome() {
	float num;
	int function;
	string input;
	   cout << "Choose which calculation you would like to be done:\n1) Regular calculations\n2) Binary to decimal conversions\n3) Decimal to binary conversions\n4) Grading calculator" << endl;
	   getline(cin, input);
	   function = get_int(input);

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

}


