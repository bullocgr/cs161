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

/*Function: roll
Description: this gets the random variables that work as the dice roll
Parameters: The rolls must be random
No input but output is an int
*/

int roll(int* dice_roll, int length) {
	srand(time(NULL));

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
		if (is_int(num) == true)
			break;
		cout << "Please input a number between 1 and 6: ";
		getline(cin, num);
	} while (true);

	int num_dice = get_int(num); //convert how many die they want to keep to an int

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

		//cout << saved_dice[i];
	}
}

/*Function: counter
Desription: this counts how many die they take out of what number
Parameters: int* int and int
Pre-conditions: dice need to be taken out in order to be added up
Post-conditions: values need to be stored
*/

void counter(int* saved_dice, int* counter_arr, int length) {
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

	if (counter_arr[7] != 0 || counter_arr[7] == 0) {
		current_score += 0;
	}

	//three pairs should go here but it might be too much to code
	//the last three scores are hard as fuckkkkk

	cout << "Your score is: " << current_score << endl;
	return current_score;
}

int main() {
	string players;
	welcome(&players);
	char input;
	int length = 6;
	int * saved_dice = new int[length];
	int* counter_arr = new int[length];
	int * dice_roll = new int[length];

	do {
		cout << "Your numbers rolled are: " << endl;
		roll(dice_roll, length);
		// counter(dice_roll, length);


		dice_out(dice_roll, saved_dice);


		counter(saved_dice, counter_arr, length);

		scoring(counter_arr, length);

		cout << "Continue your turn? (y/n): ";
		cin >> input;
	} while (input = 'y');

	// }while(score != 10000)

	delete[] dice_roll;
	delete[] saved_dice;
	delete[] counter_arr;

} //still need to get the farkle working and the final scoreboard working

