/*
#include <iostream>
using namespace std;

int compute(int a, int b, int (*func)(int a, int b)) {
	return func(a, b);
}

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b) {
	return a < b ? a : b;
}

int sum(int a, int b) {
	return a + b;
}

int main() {
	int x = 1;
	int y = 3;
	cout << compute(x, y, &max) << endl;
	cout << compute(x, y, &min) << endl;
	cout << compute(x, y, &sum) << endl;
	return 0;
}
*/