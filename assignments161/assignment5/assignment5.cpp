#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std; 

/*Function: check_int
Description: this is for error handling. it checks if input is a number
Parameters: bool and int
Pre-conditions: input is a string
Post-conditions: output is a bool
*/

bool check_int(string num){
  for(int i=0; i < num.length(); i++) {
    if((num[i] > 49) && (num[i] < 58))
      return true;
    }

    return false;

}

/*Function: welcome
Descriptiom: this fuction decides how many players there will be
Parameters: input must be an integer
Pre-conditions: input must be an int
Post-conditions: there is nothing to be output
*/

//NEED TO ERROR HANDLE IN THIS
//how do i store the player value as an int in the array
//would I use the get_int function??
void welcome(string* players) {
	cout << "Welcome to farkle!! Enter how many players there are: ";
	getline(cin, *players);
	do{
		if(check_int(*players) == true)
			break;
		cout << "There has to be 2 or more players.\nEnter how many players there are: ";
		getline(cin, *players);
		}while(true);
		//if this was false it would only run once
		//true causes an infinite loop that breaks if it is true

	cout << "Decide who player one is.\nThe game will now begin." << endl;
}

/*Function: get_int
Description: take player string and convert it to int for an array
Parameters: string and int
Pre: string
Post: int
*/
 
int get_int(string players) {
    int *return_int = 0;
    players = "";
   
    for(int i = 0; players.length(); i++){
      return_int *= 10;
      return_int += (int(players[i]) - 48);
    }
    return *return_int;

}

/*Function: roll
Description: this gets the random variables that work as the dice roll
Parameters: The rolls must be random
No input but output is an int
*/

int roll(int* dice_roll, int length) {
	srand(time(NULL));	
	for(int i = 0; i < length; i++) {
		dice_roll[i] = ((rand() % 6) + 1);

	}

	for(int i = 0; i < length; i++)
		cout << dice_roll[i] << endl;

}

/*Function: Scores
Description: this gives the scores of each player at the end of a players turn
Parameters: looks at two pointers
Pre-conditions: dice must have been rolled and turn must be over in order to run
Post-conditions: values must be stored
*/

int scores(int** scoreboard, int rows, int cols) {
	scoreboard = new int*[rows];
	for(int i = 0; i < rows; i++){
		(*scoreboard)[i] = new int[cols];
	}

}
	//scores will come from another function
	//this does not work lol



int main() {
	// string num;
	// getline(cin, num);
	// cout << check_int(num) << endl;
	//this is just to check if my error handling is correct
	string players;
	welcome(&players);

	int length = 6;
	int * dice_roll = new int[length];
	cout << "Your numbers rolled are: " << endl;
	roll(dice_roll, length);

	delete[] dice_roll;

	}
	
