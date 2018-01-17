#include <iostream> 
using namespace std;

int main () {
	int n;
	cout << "Choose to go left(1) or right(2)" << endl;
	cin >> n;
	if (n == 1) {
		cout << "go up the stairs" << endl;
	}
	else if (n == 2) {
		cout << "go into the basement" << endl;
	}

	return 0;
}