/*
#include <iostream>
#include <cstdlib>
using namespace std;

enum Gamestatus {WIN, LOSE, CONTINUING};

int main() {
	int curpoint, lastpoint, seed, rolldice();
	Gamestatus status = CONTINUING;
	cout << "Please enter an unsigned integer";
	cin >> seed;
	srand(seed);
	curpoint = rolldice();

	switch (curpoint) {
	case 7:
	case 11:
		status = WIN;
		break;
	case 2:
	case 3:
	case 12:
		status = LOSE;
		break;
	default:
		status = CONTINUING;
		break;
	}

	while (status == CONTINUING) {
		lastpoint = curpoint;
		curpoint = rolldice();
		if (curpoint == lastpoint) status = WIN;
		else if (curpoint == 7) status = LOSE;
	}

	if (status == WIN)
		cout << "The player wins." << endl;
	else
		cout << "The player loses." << endl;
	return 0;
}

int rolldice() {
	int dice1 = 1 + rand() % 6;
	int dice2 = 1 + rand() % 6;
	int res = dice1 + dice2;
	cout << "dice1:" << dice1 << "  dice2:" << dice2 << "  sum:" << res << endl;
	return res;
}
*/