#include "header.h"
using namespace std;

int main() {
	srand(time(NULL));
	string players;
	int num_players = welcome(&players);
	char input;
	int length = 6;
	int * saved_dice = new int[length];
	int* counter_arr = new int[length];
	int * dice_roll = new int[length];
	int * counter_og = new int[length];
	int *scoreboard = new int[num_players];
	resetArr(scoreboard, num_players);
	int current_score;

	do {
		for (int i = 0; i < num_players; i++) {
			int temp_score = 0;
			do {
				cout << "Your numbers rolled are: " << endl;
				roll(dice_roll, length);

				counter_original(dice_roll, counter_og, length);
				if(farkle(counter_og, length)) {
					cout << "FARKLE" << endl;
					continue;
				}

				dice_out(dice_roll, saved_dice);
				counter_saved(saved_dice, counter_arr, length);

				temp_score += scoring(counter_arr, length);

				cout << "Continue your turn? (y/n): ";
				cin >> input;
			} while (input == 'y');

			scoreboard[i] += temp_score;
			final_score(num_players, scoreboard);
			resetArr(counter_arr, 6);
			resetArr(dice_roll, length);
			resetArr(counter_og, length);
		}

	} while (final_score(num_players, scoreboard) < 10000);


	delete[] dice_roll;
	delete[] saved_dice;
	delete[] counter_arr;
	delete[] counter_og;
	delete[] scoreboard;

}

