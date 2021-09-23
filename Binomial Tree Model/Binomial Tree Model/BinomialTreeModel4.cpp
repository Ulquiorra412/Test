#include <iostream>
#include <iomanip>
#include <cmath>
#include "BinomialTreeModel.h"
using namespace std;
/*
int main() {
	double u = 1.15125, d = 0.86862, r = 1.00545;
	double s0 = 106;
	if (u <= 0 || d <= 0 || r <= 0 || s0 <= 0 || u <= d) {
		cerr << "Invalid data, terminate the program without calculation." << endl;
		return -1;
	}
	if (r >= u || r <= d) {
		cerr << "Arbitrage exists, terminate the program without calculation." << endl;
		return -1;
	}
	for (int n = 0; n <= 8; n++) {
		for (int i = 0; i <= n; i++) {
			cout << "Asset Price at Binomaial Tree Node("
				<< n << "," << i << ") = " << fixed << setprecision(2);
			cout << s0 * pow(u, i) * pow(d, n - i) << endl;
		}
	}
	return 0;
}
*/