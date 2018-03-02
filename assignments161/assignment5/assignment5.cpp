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

/*Function: Scoring
Desription: this should add up all the points the player has
Parameters: look at the dice they take out and add their scores
Pre-conditions: dice need to be taken out in order to be added up
Post-conditions: values need to be stored
*/

int counter(int* dice_roll, int length) {
	int* one_counter = 0;
	int* two_counter = 0;
	int* three_counter = 0;
	int* four_counter = 0;
	int* five_counter = 0;
	int* six_counter = 0;
	for(int i = 0; i < length; i++) {
		if(dice_roll[i] == 1) 
			*one_counter ++;
		
		if(dice_roll[i] == 2)
			*two_counter ++;

		if(dice_roll[i] == 3)
			*three_counter ++;

		if(dice_roll[i] == 4)
			*four_counter ++;

		if(dice_roll[i] == 5)
			*five_counter ++;

		if(dice_roll[i] == 6)
			*six_counter ++;
	}
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
		cout <<"Dice " << i + 1 << " is: " << dice_roll[i] << endl;

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

// int *dice_out(int* dice_roll) {
// 	string num, save;
// 	int* saved_dice = dice_roll;
// 	cout << "Enter how many dice you want to keep: ";
// 	getline(cin, num);
// 	do{
// 		if(is_int(num) == true)
// 			break;
// 		cout << "Please input a number between 1 and 6: ";
// 		getline(cin, num);
// 		}while(true);

// 	int num_dice = get_int(num);

// 	for(int i = 0; i < num_dice; i++) {
// 		cout << "Enter where the numbers are that you want to save: ";
// 		getline(cin, save);

// 		do{
// 		if(is_int(save) == true)
// 			break;
// 		cout << "Please input a number between 1 and 6: "; 
// 		getline(cin, save);
// 		}while(true);

// 	// int saved = get_int(save);

// 	// 		for(i = 0; i < num_dice; i++) {
// 	// 			dice_roll[i-1] = saved_dice[i-1];
// 	// 			cout << *saved_dice << endl; //ouputs the first value of the array
// 	// 			// dice_roll[i-1] = NULL;
// 	// 	}

// 	// }

// //the code here should go through and save the indexes the user specifies
// 	// who knows what the syntax is

// 	return saved_dice;
// }

/*Function: Scores
Description: this gives the scores of each player at the end of a players turn
Parameters: looks at two pointers
Pre-conditions: dice must have been rolled and turn must be over in order to run
Post-conditions: values must be stored
*/

int scoring(int* counter, int length) {
	*counter;
	length = 6;
	int* score = 0;
	int one_counter;
	int two_counter;
	int three_counter;
	int four_counter;
	int five_counter;
	int six_counter;
	for(int i = 0; i < length; i++) {
		if(one_counter == 1)
			score += 100;
		if(five_counter == 1)
			score += 50;
		if(two_counter == 3)
			score += 200;
		if(three_counter == 3)
			score += 300;
		if(four_counter == 3)
			score += 400;
		if(five_counter == 3)
			score += 500;
		if(six_counter == 3)
			score += 600;
	}

	return *score;
} //this is causing me a seg fault pls help

// }
	//scores will come from another function
	//this does not work lol



int main() {
	string players;
	welcome(&players);

	// do{
		int length = 6;
		int * dice_roll = new int[length];
		cout << "Your numbers rolled are: " << endl;
		roll(dice_roll, length);
		counter(dice_roll, length);

		// dice_out(dice_roll);
		// int * saved_dice = new int[length];
		// cout << saved_dice << endl;
		// //trying to see if the new array stores the values they wanted to store but i keep getting the memory address

		cout << scoring(dice_roll, length) << endl;
		
		//core dump right here
	// }while(score != 10000)
	
	delete[] dice_roll;
	// delete[] saved_dice;

	}
	
