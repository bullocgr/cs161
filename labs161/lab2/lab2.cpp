#include <iostream> 
#include <cmath> 
#include <climits>
using namespace std;

int main () {

	int number_bytes = 8;
	long number_bits = 8*(number_bytes); 

	long result;
	
	cout << "Maximum value in unsigned binary = " << pow (2, number_bits)-1 << endl;
	result = pow (2, number_bits)-1;
	cout << "Minimum number for unsigned binary = " << 0 << endl;
	
	cout << "Maximum value in signed binary = " << pow (2, number_bits-1)-1 << endl;
	result = pow (2, number_bits-1)-1;
	cout << "Minimum value in signed binary = " << -1*(pow (2, number_bits-1)-1) << endl;
	result = -1*(pow (2, number_bits-1)-1);

	return 0;
}
