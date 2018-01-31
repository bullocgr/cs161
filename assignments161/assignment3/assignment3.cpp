#include <iostream>

using namespace std;

bool isEven(int n)
{
    if(n%2 == 0)
        return true;
    else
        return false; 
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isEven(num)) //If true
        cout << "True." << endl;
    else //If false
        cout << "False." << endl;

    return 0;
}