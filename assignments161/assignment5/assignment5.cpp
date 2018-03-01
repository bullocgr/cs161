#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std; 

/*Function: get_int
Description: take player string and convert it to int for an array
Parameters: string and int
Pre: string
Post: int
*/
 
int get_int(string input) {
    int return_int = 0;
    
    for(int i = 0; i < input.length(); i++){
      return_int *= 10;
      return_int += (int(input[i]) - 48);
    }
    return return_int;

}

/*Function: check_int
Description: this is for error handling. it checks if input is a number between 2 and infinity
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
int welcome(string* players) {
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
	return get_int(*players);
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

/*Function: is_int
Description: checks if an int is between 1 and 6
Parameters: take user input as a string
Pre-conditions: input must be a string
Post-conditions: must be inbetween 1-6 and output a bool
*/
bool is_int(string input) {
	for(int i=0; i < input.length(); i++) {
    if((input[i] > 48) && (input[i] < 55))
      return true;
    }

    return false;

}

/*Function: dice_out
Description: this should allow the user to store the dice they don't want to reroll
Parameters: look at the random rolls
Pre-conditions: dice must be random
Post-conditions: this is used to find a score
*/

int dice_out(int* dice_roll) {
	string num, save;
	int* saved_dice = dice_roll;
	cout << "Enter how many dice you want to keep: ";
	getline(cin, num);
	do{
		if(is_int(num) == true)
			break;
		cout << "Please input a number between 1 and 6: ";
		getline(cin, num);
		}while(true);

	int num_dice = get_int(num);

	for(int i = 0; i < num_dice; i++) {
		cout << "Enter what numbers you are keeping: ";
		getline(cin, save);

		do{
		if(is_int(save) == true)
			break;
		cout << "Please input a number between 1 and 6: "; //bounds error in this error handling
		getline(cin, save);								  // make it so that you can choose which index to move not which numbers
		}while(true);

	int saved = get_int(save);

		if(dice_roll[i] == saved)
			saved_dice[i] = saved;

	}
	return *saved_dice;
}

/*Function: Scoring
Desription: this should add up all the points the player has
Parameters: look at the dice they take out and add their scores
Pre-conditions: dice need to be taken out in order to be added up
Post-conditions: values need to be stored
*/

// int scoring(int* saved_dice, int length) {
// 	int* score = 0;
// 	for(int i = 0; i < length; i++) {
// 		if(saved_dice[i] == 1)
// 			*score = 100;
// 		if(saved_dice[i] == 5)
// 			*score = 50;
// 	}

// 	return *score;
// }
//core dump in this function

/*Function: Scores
Description: this gives the scores of each player at the end of a players turn
Parameters: looks at two pointers
Pre-conditions: dice must have been rolled and turn must be over in order to run
Post-conditions: values must be stored
*/

// int scores(int* scoreboard, int length) {

// }
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

	dice_out(dice_roll);

	// int scores;
	// int * saved_dice = new int[length];
	// scoring(saved_dice, length);
	//core dump right here
	
	delete[] dice_roll;

	}
	
