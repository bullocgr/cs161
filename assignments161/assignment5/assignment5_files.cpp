#include "header.h"
using namespace std;

/*Function: get_int
Description: take player string and convert it to int for an array
Parameters: string and int
Pre: string
Post: int
*/

int get_int(string input) {
	int return_int = 0;

	for (int i = 0; i < input.length(); i++) {
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

bool check_int(string num) {
	for (int i = 0; i < num.length(); i++) {
		if ((num[i] > 49) && (num[i] < 58))
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

int welcome(string* players) {
	cout << "Welcome to farkle!! Enter how many players there are: ";
	getline(cin, *players);
	do {
		if (check_int(*players) == true)
			break;
		cout << "There has to be 2 or more players.\nEnter how many players there are: ";
		getline(cin, *players);
	} while (true);

	//if this was false it would only run once
	//true causes an infinite loop that breaks if it is true

	cout << "Decide who player one is.\nThe game will now begin." << endl;
	return get_int(*players);
}

/*Function: is_int
Description: checks if an int is between 1 and 6
Parameters: take user input as a string
Pre-conditions: input must be a string
Post-conditions: must be inbetween 1-6 and output a bool
*/

bool is_int(string input) {
	for (int i = 0; i < input.length(); i++) {
		if ((input[i] > 48) && (input[i] < 55))
			return true;
	}

	return false;

}

/*Function: die_length
Description: checks if a die is a valid die number
Parameters: take user input and checks it
Pre-conditions: input is a string
Post-conditions: output is a bol
*/

bool die_length(string die_keep) {
	for (int i = 0; i < die_keep.length(); i++) {
		if ((die_keep[i] > 47) && (die_keep[i] < 55))
			return true;
	}

	return false;
}

/*Function: roll
Description: this gets the random variables that work as the dice roll
Parameters: The rolls must be random
No input but output is an int
*/

int roll(int* dice_roll, int length) {
	for (int i = 0; i < length; i++) {
		if (dice_roll[i] != -1) {
			dice_roll[i] = ((rand() % 6) + 1);
		}
	}

	for (int i = 0; i < length; i++)
		if (dice_roll[i] != -1)
			cout << "Dice " << i + 1 << " is: " << dice_roll[i] << endl;

}

/*Function: dice_out
Description: this should allow the user to store the dice they don't want to reroll
Parameters: look at the random rolls
Pre-conditions: dice must be random
Post-conditions: this is used to find a score
*/

void dice_out(int* dice_roll, int* saved_dice) {
	string num, save;
	cout << "Enter how many die you want to keep: ";
	getline(cin, num);
	do {
		if (die_length(num) == true)
			break;
		cout << "Please input a valid die amount: " << endl;
		getline(cin, num);
	} while (true);

	int num_dice = get_int(num); //convert how many die they want to keep to an int

	if (num_dice > 0) {
		for (int i = 0; i < num_dice; i++) {
			cout << "Enter what die number you want to save(hit enter after every number): ";
			getline(cin, save);
			do {
				if (is_int(save) == true)
					break;
				cout << "Please input a number between 1 and 6: ";
				getline(cin, save);
			} while (true);

			int saved = get_int(save); //convert what index they want to keep to an int

			saved_dice[i] = dice_roll[saved - 1];
			dice_roll[saved - 1] = -1;
		}
	}
}

/*Function: counter_original
Description: this counts how many options they have at the beggining of each turn
Parameters: take in the original array string
Pre-conditions: need to pass in the original array
Post-conditions: array counter must work to be used later on
*/

void counter_original(int* dice_roll, int* counter_og, int length) {
	length = 7;
	counter_og[7];
	for (int i = 0; i < length; i++) {
		if (dice_roll[i] == 1) {
			counter_og[0]++;
		}

		if (dice_roll[i] == 2) {
			counter_og[1]++;
		}

		if (dice_roll[i] == 3) {
			counter_og[2] ++;
		}

		if (dice_roll[i] == 4) {
			counter_og[3] ++;
		}

		if (dice_roll[i] == 5) {
			counter_og[4] ++;
		}

		if (dice_roll[i] == 6) {
			counter_og[5] ++;
		}

		if (dice_roll[i] == -1) {
			counter_og[7] ++;
		}
	}
	// for(int i =0; i< length; i++){
	// 	cout << counter_og[i] << endl;
	//}

}

/*Function: counter_saved
Desription: this counts how many die they take out of what number
Parameters: int* int and int
Pre-conditions: dice need to be taken out in order to be added up
Post-conditions: values need to be stored
*/

void counter_saved(int* saved_dice, int* counter_arr, int length) {
	length = 7;
	counter_arr[7];
	for (int i = 0; i < length; i++) {
		if (saved_dice[i] == 1) {
			counter_arr[0]++;
		}

		if (saved_dice[i] == 2) {
			counter_arr[1]++;
		}

		if (saved_dice[i] == 3) {
			counter_arr[2] ++;
		}

		if (saved_dice[i] == 4) {
			counter_arr[3] ++;
		}

		if (saved_dice[i] == 5) {
			counter_arr[4] ++;
		}

		if (saved_dice[i] == 6) {
			counter_arr[5] ++;
		}

		if (saved_dice[i] == -1) {
			counter_arr[7] ++;
		}
	}
	// for(int i =0; i< length; i++){
	// 	cout << counter_arr[i] << endl;
	// }

}


//three pairs should go here but it might be too much to code
//the last three scores are hard

/*Function: Scoring
Description: this gives the scores of each player at the end of a players turn
Parameters: looks at two pointers
Pre-conditions: dice must have been rolled and turn must be over in order to run
Post-conditions: values must be stored
*/

int scoring(int* counter_arr, int length) {
	length = 6;
	int current_score = 0;
	if (counter_arr[0] == 1) {
		current_score += 100;
	}

	if (counter_arr[0] == 3) {
		current_score += 300;
	}

	if (counter_arr[1] == 3) {
		current_score += 200;
	}

	if (counter_arr[2] == 3) {
		current_score += 300;
	}

	if (counter_arr[3] == 3) {
		current_score += 400;
	}

	if (counter_arr[4] == 1) {
		current_score += 50;
	}

	if (counter_arr[4] == 3) {
		current_score += 500;
	}

	if (counter_arr[5] == 3) {
		current_score += 300;
	}

	if (counter_arr[0] == 4 || counter_arr[1] == 4 || counter_arr[2] == 4 || counter_arr[3] == 4 || counter_arr[4] == 4 || counter_arr[5] == 4) {
		current_score += 1000;
	}

	if (counter_arr[0] == 5 || counter_arr[1] == 5 || counter_arr[2] == 5 || counter_arr[3] == 5 || counter_arr[4] == 5 || counter_arr[5] == 5) {
		current_score += 2000;
	}

	if (counter_arr[0] == 6 || counter_arr[1] == 6 || counter_arr[2] == 6 || counter_arr[3] == 6 || counter_arr[4] == 6 || counter_arr[5] == 6) {
		current_score += 3000;
	}

	if (counter_arr[0] == 1 && counter_arr[1] == 1 && counter_arr[2] == 1 && counter_arr[3] == 1 && counter_arr[4] == 1 && counter_arr[5] == 1) {
		current_score += 1500;
	}

	if((counter_arr[0] == 4 || counter_arr[1] == 4 || counter_arr [2] == 4 || counter_arr[3] == 4 || counter_arr[4] == 4 || counter_arr[5] == 4) && (counter_arr[0] == 2 || counter_arr[1] == 2 || counter_arr [2] == 2 || counter_arr[3] == 2 || counter_arr[4] == 2 || counter_arr[5] == 2)) {\
		current_score += 1500;
	}

	if (counter_arr[7] != 0 || counter_arr[7] == 0) {
		current_score += 0;
	}

	//three pairs should go here but it might be too much to code
	//the last two scores are hard

	cout << "Your score is: " << current_score << endl;
	return current_score;
}

/*Function: farkle
Description: checks before a player can pull dice if they get a farkle
Parameters: pass in an array and check for points
Pre-conditions: array must pass
Post-conditions: nothing is returned
*/

bool farkle(int* counter_og, int length) {
	if (counter_og[0] == 1) {
		return false;
	}

	if (counter_og[0] == 3) {
		return false;
	}

	if (counter_og[1] == 3) {
		return false;
	}

	if (counter_og[2] == 3) {
		return false;
	}

	if (counter_og[3] == 3) {
		return false;
	}

	if (counter_og[4] == 1) {
		return false;
	}

	if (counter_og[4] == 3) {
		return false;
	}

	if (counter_og[5] == 3) {
		return false;
	}

	if (counter_og[0] == 4 || counter_og[1] == 4 || counter_og[2] == 4 || counter_og[3] == 4 || counter_og[4] == 4 || counter_og[5] == 4) {
		return false;
	}

	if (counter_og[0] == 5 || counter_og[1] == 5 || counter_og[2] == 5 || counter_og[3] == 5 || counter_og[4] == 5 || counter_og[5] == 5) {
		return false;
	}

	if (counter_og[0] == 6 || counter_og[1] == 6 || counter_og[2] == 6 || counter_og[3] == 6 || counter_og[4] == 6 || counter_og[5] == 6) {
		return false;
	}

	if (counter_og[0] == 1 && counter_og[1] == 1 && counter_og[2] == 1 && counter_og[3] == 1 && counter_og[4] == 1 && counter_og[5] == 1) {
		return false;
	}

	if((counter_og[0] == 4 || counter_og[1] == 4 || counter_og [2] == 4 || counter_og[3] == 4 || counter_og[4] == 4 || counter_og[5] == 4) && (counter_og[0] == 2 || counter_og[1] == 2 || counter_og [2] == 2 || counter_og[3] == 2 || counter_og[4] == 2 || counter_og[5] == 2)) {\
		return false;
	}

	//three pairs should go here but it might be too much to code
	//the last two scores are hard

	return true;
}

/*Function: final_score
Description: shows the finals score of each player
Parameters: int and the array
Pre-conditions: must have more than 1 player
Post-conditions: must have points to add up
*/

int final_score(int players, int* scoreboard) {
	for (int i = 0; i < players; i++) {
		cout << "Player " << i + 1 << ":";
		cout << (scoreboard)[i] << endl;
	}
}

/*Function: resetArr
Description: this just sets every array equal to 0 at the beginning
*/

void resetArr(int*array, int length){
	for(int i =0; i<length; i++){
		array[i]=0;
	}
}