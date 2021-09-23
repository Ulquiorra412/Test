/*
#include <iostream>
using namespace std;
int main() {
	int(*A)[9][8] = new int[7][9][8];
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				*(*(*(A + i) + j) + k) = i * 100 + j * 10 + k;
		}
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 8; k++)
				cout << A[i][j][k] << endl;
		}
	}
	delete[] A;
	return 0;
}
*/