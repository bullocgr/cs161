#include <iostream>
#include <sys/time.h>
#include <cstdlib>

using namespace std;

long fib_iter(int n) {
	long result = 0;
	int old = 1;
	int oldest = 0;
	for(int i = 0; i < n-1; ++i) {
		result = old + oldest;
		oldest = old;
		old = result;
	}

	return result;
}

long fib_recur(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (fib_recur(n-1) + fib_recur(n-2));
}

long stair_case(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;

	return (stair_case(n-1) + stair_case(n-2));
	//return (fib_recur(n-1) + fib_recur(n-2) + fib_recur(n-3)+1);
}

int main() {

	typedef struct timeval time;
	time stop, start;

	gettimeofday(&start, NULL);
//Time your iterative or recursive function here.
		//cout << fib_iter(7) << endl;
		//cout << fib_recur(7) << endl;
		cout << stair_case(5) << endl;

	gettimeofday(&stop, NULL);

	if(stop.tv_sec > start.tv_sec)
		cout << "Seconds: " << stop.tv_sec-start.tv_sec << endl;
	else
		cout << "Micro: " << stop.tv_usec-start.tv_usec << endl;
	return 0;
}


//1: 54 micro, 59 micro
//5: 56 micro, 58 micro
//15: 55 micro, 63 micro
//25: 57 micro, 1103 micro
//45: 55 micro, 15 seconds