#include "BinomialTreeModel.h"
#include "Option01.h"
#include "Options02.h"
#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;
using namespace fre;

/*
int main() {
	double s0 = 0, U = 0, D = 0, R = 0;
	if (GetInputData(s0, U, D, R) != 0) return -1;
	double K = 0;
	int N = 0;
	cout << "Enter call option data" << endl;
	GetInputData(N, K);
	double* optionPrice = NULL;
	optionPrice = PriceByCRR(s0, U, D, R, N, K, CallPayoff);
	cout << "European call option price = " << fixed << setprecision(2) << optionPrice[0] << endl;
	optionPrice = PriceByCRR(s0, U, D, R, N, K, PutPayoff);
	cout << "European put option price = " << fixed << setprecision(2) << optionPrice[0] << endl;
	// digit option
	optionPrice = PriceByCRR2(s0, U, D, R, N, K, DigitCallPayoff);
	cout << "European digit call option price = " << fixed << setprecision(2) << optionPrice[0] << endl;
	optionPrice = PriceByCRR2(s0, U, D, R, N, K, DigitPutPayoff);
	cout << "European digit put option price = " << fixed << setprecision(2) << optionPrice[0] << endl;

	delete [] optionPrice;
	optionPrice = NULL;
	return 0;
}
*/