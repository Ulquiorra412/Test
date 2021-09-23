#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const int SIZE = 81;

/*
int main() {
	double u = 1.15125, d = 0.86862;
	double s0 = 106;
	double aPrice = 0.0;
	double prices[SIZE];
	for (int i = 0; i < SIZE; i++) {
		prices[i] = 0.0;
	}
	int index = 0;
	for (int n = 0; n <= 8; n++) {
		for (int i = 0; i <= n; i++) {
			aPrice = s0 * pow(u, i) * pow(d, n - i);
			prices[index++] = aPrice;
		}
	}
	index = 0;
	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "Asset Price at Binomial Model Tree Node(" << i << "," << j << ")=" << fixed << setprecision(2);
			cout << prices[index++];
			cout << endl;
		}
	}
	return 0;
}
*/
