#pragma once

namespace fre {
	// inputting and displaying option data
	int GetInputData(int& N, double& K);
	// pricing European option
	double* PriceByCRR(double S0, double U, double D, double R, int N, int K, double(*Payoff)(double z, double K));
	// pricing European option by digit method
	double* PriceByCRR2(double S0, double U, double D, double R, int N, int K, double(*DigitPayoff)(double z, double K));
	// computing call payoff
	//该函数已经在options1里面写入fre namespace了，不能重载。
	/*
	double CallPayoff(double z, double K);
	*/
	// computing put payoff
	double PutPayoff(double z, double K);

	double DigitCallPayoff(double z, double K);
	double DigitPutPayoff(double z, double K);
}
