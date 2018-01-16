
/*Program Filename: assignment1
 * Author: Grace Bullock
 * Date: Jan 10, 2017
 * Description: Solve math functions
 * Input: nothing
 * Output: Answers for the math problems
 * */
#include <iostream>
#include <cmath>
using namespace std;
int main () {

	cout << "cos(2/3) = " << cos (2.0 / 3.0)  << endl;
	cout << "2*sin(2/3) = " << 2.0 * sin (2.0 / 3.0) << endl;
	cout << "tan(-3/4) = " << tan((-1.0 * 3.0) / 4.0) << endl;
	cout << "log base 10 of 55 = " << log10 (55.0) << endl;
	cout << "natural log of 60 = " << log (60.0) << endl;

	cout << "find the log base 2 of 15." << endl;
	cout << "ln(15) = " << log (15.0) << endl;
	cout << "ln(2) = " << log (2.0) << endl;
	cout << "ln(15) / ln(2) = " << (log (15.0)) / (log (2.0)) << endl;
//log base 2 of 15 steps
	cout << "find the log base 4 of 40." << endl;
	cout << "ln(40) = " << log (40.0) << endl;
	cout << "ln(4) = " << log (4.0) << endl;
	cout << "ln(40) / ln(4) = " << (log (40.0)) / (log (4.0)) << endl;
//log base 4 of 40 steps

	int x = 1.0;
	cout << "sin(x) = " << sin (x) << endl;
	cout << "3 raised to the sin(x) = " << pow (3.0, sin (x)) << endl;
	
	cout << "(x^2 + 1) = " << pow (x, 2.0) + 1.0 << endl;
	cout << "log base 2 of (x^2 + 1) = " << log2 (pow (x, 2.0) + 1) << endl;

	x = 10.0;
	cout << "sin(x) = "<< sin (x) << endl;
	cout << "3 raised to the sin(x) = " << pow (3.0, sin (x)) << endl;

	cout << "(x^2 + 1) = " << pow (x, 2.0) + 1.0 << endl;
	cout << "log base 2 of (x^2 + 1)  = " << log2 (pow (x, 2.0) + 1.0) << endl;

	x = 100.0;
	cout << "sin(x) = " << sin (x) << endl;
	cout << "3 raised to the sin(x) = " << pow (3.0, sin (x)) << endl;
	
	cout << "(x^2 + 1) = " << pow (x, 2.0) + 1.0 << endl;
	cout << "log base 2 of (x^2 + 1) " << log2 (pow (x, 2.0) + 1.0) << endl;
	
	return 0;
}
