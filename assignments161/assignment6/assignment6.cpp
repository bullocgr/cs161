#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

void display(int** board, int rows, int cols);
int mod_atoi(char* array);
void pop_board(int** board_arr, int rows, int cols);
bool check_move(int** board, int i, int j, int rows, int cols);
bool move_piece(char* input, int** board, int rows);
void get_string(char* input);
void make_copy(char* input, char* copy);
bool command_line(int rows);
void king(int** board, int rows);

int main(int argc, char** argv) {
	bool game_over = true;
	int rows = mod_atoi(argv[1]); //this converts argv to an int
	int cols = rows;
	char move_input[10];
	char input_copy[256];
	int** checker_board = new int*[rows];
	for (int i = 0; i < rows; i++) {
		checker_board[i] = new int[cols];
	}
	do {
		if (command_line(rows) == true) {
			break;
		}
		cout << "Please enter a valid board size: ";
		cin >> rows;
	} while (true);

	cout << "Player 1's pieces are the number 1 on the board.\nPlayer 2's pieces are the number 2 on the board." << endl;
	cout << "When player 1 becomes a king their piece is made into a 3.\nWhen player 2 becomes a king their piece is made into a 4." << endl;
	pop_board(checker_board, rows, cols);
	display(checker_board, rows, cols);

	do {
		get_string(move_input);
		do {
			if (move_piece(move_input, checker_board, rows) == true) {
				break;
			}
			"Enter valid coord points: ";
			get_string(move_input);
			king(checker_board, rows);
		} while (true);

	} while (game_over == true);
	for (int i = 0; i < rows; i++) {
		delete [] checker_board[i];
	}
	delete [] checker_board;

	return 0;

}

/*Function: display
Description: take user input from command line and output a checker board
Parameters: must take in user input from a command line
Pre-conditions: must take in input from a command line
Post-conditions: output an array set up like a checker board
*/

void display(int** board, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		cout << i;
		for (int j = 0; j < cols; j++) {
			if (i % 2 == 0 && j % 2 == 0)
				cout << "| \033[30;47m " << board[i][j] << " ";
			else if (i % 2 == 1 && j % 2 == 1)
				cout << "| \033[30;47m " << board[i][j] << " ";
			else
				cout << "| \033[0m " << board[i][j] << " ";
			cout << "\033[0m";
		}
		cout << endl;
	}
	cout << "    ";
	for (int x = 0; x < rows; x++) {
		cout << (x) << "    ";
	}

	cout << endl;
}

/*Function: pop_board
Description: this is going to populate the board with red and white pieces
Parameters: pass in the board and set certain indexes to something
Pre-conditions: take in the board array
Post-conditions: board array must be populated after this function
*/

void pop_board(int** board_arr, int rows, int cols) {
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < cols; j++) {
			if (i % 2 == 0 && j % 2 != 0 && (i < (cols / 2) - 1))
				board_arr[i][j] = 1;
			else if (i % 2 != 0 && j % 2 == 0 &&  (i < (cols / 2) - 1))
				board_arr[i][j] = 1;
			else if (i % 2 == 0 && j % 2 != 0 && (i > (cols / 2)))
				board_arr[i][j] = 2;
			else if (i % 2 != 0 && j % 2 == 0 &&  (i > (cols / 2)))
				board_arr[i][j] = 2;
			else
				board_arr[i][j] = 0;
		}
	}
}

/*Function: mod_atoi
Description: take in the command line character array and convert it to an integer
Parameters: must read in the char array from the command line
Pre-conditions: input must be a char array
Post-conditions: output is passed into the display board function
*/

int mod_atoi(char* array) {
	int length = strlen(array);
	int value = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] == 48 || array[i] == 45) {
			continue;
		}

		else {
			value += (array[i] - 48) * pow(10, length - 1 - i);
		}
	}

	return value;
}

/*Function: check_move
Description: this will check if a move is valid
Parameters: take in the board and the coordinates that the player input
Pre-conditions: input must be a valid input
Post-conditions: output will be a bool
*/

bool check_move(int** board, int i, int j, int rows, int cols) {
	rows = cols;
	int player = 0;

	if (board[i][j] == 1) {
		player == 1;
	}
	else if (board[i][j] == 2) {
		player == 2;
	}
	else {
		return false;
	}

	if (player == 1) {
		if ((board[i - 1][j - 1] == 0 && (i - 1) >= 0) || (board[i + 1][j + 1] == 0 && (i + 1) < rows))
			return true;
	}

	return false;
}

/*Function: get_string
Description: this reads in a c style string
*/

void get_string(char* input) {
	cout << "Enter where the piece you want to move is and where you want to move the piece(example: 2(rows)4(cols) 3(rows)5(cols)): ";
	cin.getline(input, 256);
}

/*Function: move_piece
Description: reads in input and moves the piece
Parameters: read in user input as a char array and conver it to the board coords
Pre-conditions: input must be read in as a char array
Post-conditions: move the piece for each player
*/

bool move_piece(char* input, int** board, int rows) {
	int i, j, x, y;
	i = input[0] - '0';
	j = input[1] - '0';
	x = input[3] - '0';
	y = input[4] - '0';
	if (abs(i - x) != 1 || abs(j - y) != 1) {
		cout << "You have to move diagonal." << endl;
		return false;
	}
	if (board[x][y] != 0) {
		cout << "You cant put pieces on top of each other you silly goose." << endl;
		return false;
	}


	board[x][y] = board[i][j];
	board[i][j] = 0;
	display(board, rows, rows);

	return true;
}

/*Function: command_line
Description: this checks to make sure that the command line actually works
Parameters: read in the original thing and then take in the int
*/

bool command_line(int rows) {
	if (rows == 8 || rows == 12 || rows == 10) {
		return true;
	}

	return false;
}

/*Function: king
Description: this function changes the pieces to a king
Parameters: read in the board
Pre-conditions: read in the board and the pieces
Post-conditions: put out the king
*/

void king(int** board, int rows) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < rows; j++){
			if(board[i][rows-1] == 1){
				board[i][rows-1] = 3;
			}
			if(board[i][0] == 2){
				board[i][0] = 4;
			}
		}
	}
}
