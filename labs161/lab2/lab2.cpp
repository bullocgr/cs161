#include <iostream> 
#include <cmath> 
#include <climits>
using namespace std;

int main () {

	int result = 0;
	int n;
	cout << "Enter a number less than 9." << endl;
	cin >> n;
	cout << "Max amount of numbers in unsigned binary = " << pow (2, n) << endl;
	result = (2, n);
	result << UINT_MAX+1; 
	cout << "Max number in unsigned = " << UINT_MAX+1 <<endl;

	cout << "Max amount of numbers in signed binary = " << pow (2, (n-1)) << endl;
	result = (2, (n-1));

	cout << "Maximum value in unsigned binary = " << pow (2, n)-1 << endl;
	result = pow (2, n)-1;
	
	cout << "Maximum value in signed binary = " << pow (2, n-1)-1 << endl;
	result = pow (2, n-1)-1;

	return 0;
}
