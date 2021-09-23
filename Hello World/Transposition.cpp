/*
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			a[i][j] = i * 3 + j + 1;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++)
			swap(a[i][j], a[j][i]);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << ' ';
			if (j == 2) cout << '\n';
		}			
	}
	return 0;
}
*/