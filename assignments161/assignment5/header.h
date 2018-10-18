#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int get_int(string input);
bool check_int(string num);
int welcome(string* players);
bool is_int(string input);
bool die_length(string die_keep);
int roll(int* dice_roll, int length);
void dice_out(int* dice_roll, int* saved_dice);
void counter_original(int* dice_roll, int* counter_og, int length);
void counter_saved(int* saved_dice, int* counter_arr, int length);
bool farkle(int* counter_og, int length);
int scoring(int* counter_arr, int length);
int final_score(int players, int* scoreboard);
void resetArr(int*array, int length);