#pragma once
namespace fre {
	// Pricing European option
	int combinations(int N, int n);
	int factorial(int n);
	double PriceByCRR(double S0, double U, double D, double R, int N, double K);
	double PriceByCRR2(double S0, double U, double D, double R, int N, double K);
	// Computing call payoff
	double CallPayoff(double z, double k);
}