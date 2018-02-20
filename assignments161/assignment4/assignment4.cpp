#include "header.h"
using namespace std;


// string calculation;
// int num1, num2;



int main(){

	int function;
	char input;
	do{
		welcome(function);
		cout << "Continue computing (y/n): ";
		cin >> input;
	}while(input == 'y');

	if(input == 'n')
		cout << "Thank you for using the calculator!" << endl;

	return 0;
	
}	

	
