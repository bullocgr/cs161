#include <iostream>
using namespace std;
int main(){
	int n;
	int num;
	cin >> n;
	for(int i=n; i>0; i--){
		num=i+num;
		cout << num << endl;
	}
}