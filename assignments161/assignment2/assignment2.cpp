/*
Program: Assignment2.cpp
Author: Grace Bullock
Date: 1-21-17
Description: If Else statements for a story
Input: y/n and a variable
Output: if else story line
*/

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
		else if (m == 'n') {
			cout << "You don't follow the goat and wander off. The goat finds you again and asks you to please follow her.\nDo you follow it?" << endl;
			cin >> m;
				if (m == 'y') {
					cout << "She leads you back to a portal and pushes you through. You wake up in your bed.\nThank you goat lady." << endl;
					}
				if (m == 'n') {
					cout << "She leaves you angrily and you stay put. Hoping help comes. Help never comes." << endl;
				}
			}	
		}
			

//hot dog (path2)
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

//two dogs (path3)
	if (x == 3) {
		cout << "You get down the stairs and go straight down the middle. Somewhere along the path you see a hut with a window.\nDo you look into the window?" << endl;
		cin >> m;
			if (m == 'y') {
				cout << "You see two dogs. They notice you as well and they seem to be in the mood to fight. Do you fight them?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "Oh no, they were stronger than you. They take you hostage and you can never break free. You messed up bad." << endl;
					}
					if (m == 'n') {
						cout << "They fight you anyway. RIP you." << endl;
					}
			}
			else if (m == 'n') {
				cout << "You continue on but then hear barking behind you. Do you turn around to see what it is?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "You see two dogs running at you. They're too fast and won't stop. They attack you and that's it, you're dead." << endl;
					}
					if (m == 'n') {
						cout << "You stop walking but don't turn around. Everything just goes dark. RIP you I guess." << endl;
					}
			}	
	}	

//spiders (path4)
	if (x == 4) {
		cout << "You walk down the fourth path. You see something called spider cyder on the side of the road.\nDo you stop to pick it up?" << endl;
		cin >> m;
			if (m == 'y') {
				cout << "You picked up the cyder and continue along the way. You see a cave ahead.\nDo you go into the cave?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "There are spiders all around you. They look scary but they smell the cyder.\nThe spiders are happy that you took the time to look at their cyder.\nThey help you find your way back home!" << endl;
					}
					if (m == 'n') {
						cout << "There's nowhere else for you to go. You enter the cave anyway." << endl;
						cout << "There are spiders all around you. They look scary but they smell the cyder.\nThe spiders are happy that you took the time to look at their cyder.\nThey help you find your way back home!" <<endl;
					}
			}
			else if (m == 'n') {
				cout << "You ignore the cyder and continue walking. You then approach a cave. Do you enter the cave?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "You enter the cave and see spiders standing around you. They are hostile and end your life. RIP." << endl;
					}
					if (m == 'n') {
						cout << "You sit outside the cave and feel things crawling on you. You enter the cave unwillingly and never see light again." << endl;
					}
			}	
	}	

//fish (path5)
	if (x == 5) {
		cout << "You walk down the fifth path and see a beautiful waterfall. Do you sit and stare at the waterfall?" << endl;
		cin >> m;
			if (m == 'y') {
				cout << "You sit and stare. How wonderful. You notice that the water is draining.\nDo you get into the water to see where it's draining?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "You jump into the water you ballsy man. Thankfully you are a good swimmer. The drain was a portal back to your home.\nCongrats." << endl;
					}
					if (m == 'n') {
						cout << "You just sit and notice a fish in the water. The fish stares at you.\nThat's all. Your journey is over." << endl;
					}
			}
			else if (m == 'n') {
				cout << "You continue walking and at the end of the path there is a fish warrior waiting for you.\nDo you fight the warrior?" << endl;
				cin >> m;
					if (m == 'y') {
						cout << "You fight the warrior and win!! This now means that you're a murderer though. How will you live with yourself." << endl;
					}
					if (m == 'n') {
						cout << "You wait for the fish to attack and she does. In one swift strike you die. Good choice (/s)." << endl;
					}
			}	
	}	

	return 0;

}

