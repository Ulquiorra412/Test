/*
#include <iostream>
#include <cmath>
using namespace std;
const double tiny = 1e-10;

double msin(double x) {
	double res = 0;
	double t = x;
	int i = 1;
	while (fabs(t) > tiny) {
		res += t;
		t = -t * x * x / (2 * i) / (2 * i + 1);
		i++;
	}
	return res;
}

int main() {
	double res, x, y;
	cout << "x =";
	cin >> x;
	cout << "y =";
	cin >> y;
	if (x * x <= y * y) {
		res = sqrt(msin(x) * msin(x) + msin(y) * msin(y));
	}
	else {
		res = msin(x * y) / 2;
	}
	cout << res;
	return res;
}
*/