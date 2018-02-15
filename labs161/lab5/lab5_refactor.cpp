#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float current_off(float current_offer) {
	float res, val, decimal;
	string input = "";
	bool flag;
	int i, count;

	do {
		cout << "Please provide the current offer amount: ";
		getline(cin, input);
		flag = false;
		int count = 0;
		for(int i=0; i<input.length(); i++){
			if (input[i] < '0' || input[i] > '9') {
				if (input[i] == '.') {
					count++;
					if (count > 1) {
						flag = true;	
					}	
				}
				else {
					flag = true;
				}	
			} 	
		}
	} while (flag);
	
	for(i = 0; i < input.length(); i++) {
		if (input[i] == '.')
			break;	
	}

	res = 0;
	val = 0;
	for(int j = i-1; j >= 0; j--) {
		val = ((int) input[j]) -48;
		res += val * pow(10, (i - 1 - j));
	}
	decimal = 0;
	count = 1;
	for(int k = i+1; k < input.length(); k++) {
		val = ((int) input[k]) - 48;
		decimal += val * pow(10, (-count));
		count++;
	}

	current_offer = res + decimal;
		return current_offer;
}


float future_off(float future_offer) {
	float res, val, decimal;
	string input = "";
	bool flag;
	int i, count;

	do{
		cout << "Please provide the future offer amount: ";
		getline(cin, input);
		flag = false;
		int count = 0;
		for(int i=0; i<input.length(); i++){
			if (input[i] < '0' || input[i] > '9') {
				if (input[i] == '.') {
					count++;
					if (count > 1) {
						flag = true;	
					}	
				}
				else {
					flag = true;
				}	
			} 	
		}
	} while (flag);
	
	for(i = 0; i < input.length(); i++) {
		if (input[i] == '.')
			break;	
	}
	res = 0;
	val = 0;
	for(int j = i-1; j >= 0; j--) {
		val = ((int) input[j]) -48;
		res += val * pow(10, (i - 1 - j));
	}
	
	decimal = 0;
	count = 1;
	for(int k = i+1; k < input.length(); k++) {
		val = ((int) input[k]) - 48;
		decimal += val * pow(10, (-count));
		count++;
	}
	
	future_offer = res + decimal;
		return future_offer;
}

float interest_rate(float ir) {
	float res, val, decimal;
	string input = "";
	bool flag;
	int i, count;

	do{
		cout << "Please provide the interest rate: ";
		getline(cin, input);
		flag = false;
		int count = 0;
		for(int i=0; i<input.length(); i++){
			if (input[i] < '0' || input[i] > '9') {
				if (input[i] == '.') {
					count++;
					if (count > 1) {
						flag = true;	
					}	
				}
				else {
					flag = true;
				}	
			} 	
		}
	} while (flag);
	
	for(i = 0; i < input.length(); i++) {
		if (input[i] == '.')
			break;	
	}
	res = 0;
	val = 0;
	for(int j = i-1; j >= 0; j--) {
		val = ((int) input[j]) -48;
		res += val * pow(10, (i - 1 - j));
	}
	
	decimal = 0;
	count = 1;
	for(int k = i+1; k < input.length(); k++) {
		val = ((int) input[k]) - 48;
		decimal += val * pow(10, (-count));
		count++;
	}
	
	ir = res + decimal;	
}


float ir_time(float n) {
	float res, val;
	string input = "";
	bool flag;
	int i, count;

	do{
		cout << "Please provide the amount of time in years between the current offer and future offer: ";
		getline(cin, input);
		flag = false;
		int count = 0;
		for(int i=0; i<input.length(); i++){
			if (input[i] < '0' || input[i] > '9') {
				flag = true;	
			}
		}
	} while (flag);
	
	for(int i = (input.length()-1); i >= 0; i--) {
		val = ((int) input[i]) - 48;
		res +=  val * pow(10,(input.length() - i -1));
	}
	n = res;
}



int main() {
int m = 1;

	float current_offer = current_off(current_offer);
	float future_offer = future_off(future_offer); 
	float ir = interest_rate(ir);
	float n = ir_time(n);

	float val_current_offer = current_offer*(pow((1+(ir/m)),(n*m)));	
	float val_future_offer = future_offer/(pow((1+(ir/m)), (n*m)));
	
	if (val_current_offer > val_future_offer) {
		cout << "Take the current offer" << endl;	
	}
	else if (val_current_offer < val_future_offer) {
		cout << "Take the future offer" << endl;	
	}	
	else {
		cout << "Choose which ever" << endl;	
	}
	

	return 0;	
}


	
	
	
	
	
	
	
	
	
