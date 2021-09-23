#include "Options02.h"
#include "BinomialTreeModel.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

namespace fre {
	int GetInputData(int& N, double& K) {
		cout << "Enter steps to expiry N "; cin >> N;
		cout << "Enter strike price K "; cin >> K;
		cout << endl;
		return 0;
	}

	double* PriceByCRR(double S0, double U, double D, double R, int N, int K, double (*Payoff)(double z, double K)) {
		double q = RiskNeutProb(U, D, R);
		double* Price = new double[N + 1];
		for (int i = 0; i <= N; i++) {
			Price[i] = Payoff(CalculateAssetPrice(S0, U, D, N, i), K);
		}
		for (int n = N - 1; n >= 0; n--) {
			for (int i = 0; i <= n; i++) {
				Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / R;
			}
		}
		return Price;
	}

	double* PriceByCRR2(double S0, double U, double D, double R, int N, int K, double (*DigitPayoff)(double z, double K)) {
		double q = RiskNeutProb(U, D, R);
		double* Price = new double[N + 1];
		for (int i = 0; i <= N; i++) {
			double z = CalculateAssetPrice(S0, U, D, N, i);
			double signal = DigitPayoff(z, K);
			Price[i] = signal;
		}
		for (int n = N - 1; n >= 0; n--) {
			for (int i = 0; i <= n; i++) {
				Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / R;
			}
		}
		return Price;
	}
	/*
	double CallPayoff(double z, double K) {
		if (z < K) return 0;
		return z - K;
	}
	*/
	double PutPayoff(double z, double K) {
		if (K > z) return K - z;
		return 0.0;
	}

	double DigitCallPayoff(double z, double K) {
		if (z > K) return 1.0;
		return 0;
	}

	double DigitPutPayoff(double z, double K) {
		if (K > z) return 1.0;
		return 0;
	}
}