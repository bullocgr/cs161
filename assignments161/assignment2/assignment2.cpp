#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
	int x;
	char m;

	cout << "y = yes; n = no\n";
	cout << "You walk up to a mysterious gate. You get scared but decide to go through it anyway. This begins your journey.\n";
	cout << "When you come out on the other side you see stairs. Do you go down the stairs?\n";
	cin >> m;

	if (m == 'y') {
		cout << "You see 5 different paths. Choose one to go down. 1, 2, 3, 4, or 5." << endl;
		cin >> x;
	}
	if (m == 'n') {
		cout << "You turn back but the gate is closed. You are forced to go down the path." << endl;
		cout << "Choose one to go down. 1, 2, 3, 4, or 5." << endl;
		cin >> x;
	}

//follow the goat (path1)
	if (x == 1) {
		cout << "You go down the stairs and see a goat standing on its two hind legs. It asks you to follow it. Do you follow it? " << endl;
		cin >> m;
		if (m == 'y') {
			cout << "You follow the goat and it takes you into a house. It tells you to stay put. Do you stay put?" << endl;
			cin >> m;
			if (m == 'y') {
				cout << "You stay put and the goat gives you a butterscotch pie. You eat it and return to your world. The end!!" << endl;
			}
			if (m == 'n') {
				cout << "You wander off and get lost. You can't find your way back and end up starving." << endl;
			}
		}
	}
			

//don't follow the goat (path2)
	if (x == 2) {
		cout << "At the bottom of the stairs you see a hot dog. Do you eat the hot dog?" << endl;
		cin >> m;
		if (m == 'y') {
			cout << "You eat the hot dog and a skeleton comes. He goes to shake your hand. Shake his hand?" << endl;
			cin >> m;
				if (m == 'y') {
					cout << "You shake his hand and he smiles at you.\nHe tells you he can't get you out but that he will protect you in this world.\nSeems good enough for you." << endl;
				}
				if (m == 'n') {
					cout << "He gets frustrated and becomes a spooky skeleton instead.\nThis scares you so badly that you die. RIP you." << endl;
				}
		}

		else if (m == 'n') {
			cout << "You don't eat the hot dog and walk away.\nYou end up falling down a trap. You look around and think you can climb out.\nDo you try to climb out?" << endl;
			cin >> m;
			if (m == 'y') {
				cout << "You try to climb out and fall down. Too bad but you died." << endl;
				}
				if (m == 'n') {
					cout << "You decide to wait for help." << endl;
					srand(time(NULL));
					int random = rand()%3;
					switch (random) {
						case 0:
						cout << "Help comes and gets you out safely. They help you find your way home. What luck!" << endl;
						break;
					case 1:
						cout << "Help comes and gets you out. Too bad they're evil and keep you for studies in the foreign land." << endl;
						break;
					case 2: 
						cout << "No one ever comes and you stay in the hole till you die." << endl;
						break;
					default:
						cout << "RIP" << endl;
					}
				}
			}
		}
		
	return 0;

}
