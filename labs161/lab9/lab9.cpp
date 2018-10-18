#include <iostream>

using namespace std;



void print(int disks, int** b);
void towers(int disks, int** b, int from_col, int to_col, int spare);

int main() {
	int ** b;
	int spare = 1;
	int from_col = 0;
	int to_col = 2;
	int disks;

	cout << "Please enter a number for rows: ";
	cin >> disks;
	b = new int*[disks];
	for(int i = 0; i < disks; i++) {
		b[i] = new int[3]; 
	}

	towers(disks, b, from_col, to_col, spare);

	for(int i = 0; i < disks; i++) {
		delete [] b[i];
	}

	delete [] b; 

}

void towers(int disks, int** b, int from_col, int to_col, int spare) {
	if(disks >= 1) {
		towers(disks-1, b, from_col, spare, to_col);
		cout << "this is printing" << endl;
		for(int i = 0; i < disks; i++) {
			cout << "HIIII THIS IS LOOPING" << endl;
			if(b[i][0] != 0) {
				for(int j = 0; j < 3; j++) {
					if(b[0][j] != 0){
						b[j-1][to_col] = b[i][from_col];
						b[i][from_col] = 0;
						break;
					} 
					if(j == 2){
						b[to_col][j] = b[i][from_col];
						b[i][from_col] = 0;
						break;
					}
				}
				break;
			}	

		}

	print(disks, b);
	towers(disks-1, b, spare, to_col, from_col);

	}

}

void print(int disks, int** b) {
	for(int i = 0; i < disks; i++) {
		for(int j = 0; j < 3; j++) {
			cout << b[i][j] << " ";
		}

		cout << endl;
	}
}