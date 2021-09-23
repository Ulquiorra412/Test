#include "BinomialTreeModelv2.h"
#include "Option01.h"
#include "Options02.h"
#include "Options03.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace fre;

int main() {
	int N = 8;
	double U = 1.15125, D = 0.86862, R = 1.00545;
	double S0 = 106, K = 100;
	BinomialTreeModel BinModel(S0, U, D, R);
	if (BinModel.ValidateInputData() != 0) return -1;
	double* optionPrice = NULL;
	optionPrice = PriceByCRR(BinModel, N, K, CallPayoff);
	cout << "European Call option price = " << optionPrice[0] << endl;
	optionPrice = PriceByCRR(BinModel, N, K, PutPayoff);
	cout << "EuroPean Put option price = " << optionPrice[0] << endl;
	delete optionPrice;
	optionPrice = NULL;
	return 0;
}