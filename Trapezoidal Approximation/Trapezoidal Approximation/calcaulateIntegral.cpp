#include "trapezoidal.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using namespace INTEGRAL;

double function1(double x) {
	return 0.5 * pow(x, 2);
}

double function2(double x) {
	return 1;
}

int main() {
	integral model1 = integral(0, 3.1415926, function2);
	if (model1.validateData() != 0) {
		cout << "error in data inputs" << endl;
		cout << "Terminating program" << endl;
	}
	cout << "The Trapezoidal approximation of the integral result is " << fixed << setprecision(4) 
		<< model1.integralByTrapezoidal(1000) << endl;
	cout << "The Simpson approximation of the integral result is" << fixed << setprecision(4)
		<< model1.integralBySimpson(1000) << endl;
}