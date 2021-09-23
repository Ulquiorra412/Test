#include "Option01.h"
#include "BinomialTreeModel.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

namespace fre {
	double PriceByCRR(double S0, double U, double D, double R, int N, double K) {
		double q = RiskNeutProb(U, D, R);
		double Price[9];
		for (int i = 0; i <= N; i++) {
			Price[i] = 0.0;
		}
		for (int i = 0; i <= N; i++) {
			Price[i] = CallPayoff(CalculateAssetPrice(S0, U, D, N, i), K);
		}
		for (int n = N - 1; n >= 0; n--) {
			for (int i = 0; i <= n; i++) {
				Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / R;
			}
		}
		return Price[0];
	}

	double PriceByCRR2(double S0, double U, double D, double R, int N, double K) {
		double q = RiskNeutProb(U, D, R);
		double Price[9];
		for (int n = 0; n <= N; n++) {
			Price[n] = CallPayoff(CalculateAssetPrice(S0, U, D, N, n), K);
		}
		double price0 = 0;
		for (int i = 0; i <= N; i++) {
			price0 += 1.0 / pow(R, N) * factorial(N) / factorial(i) / factorial(N - i) * pow(q, i) * pow(1 - q, N - i) * Price[i];
		}
		return price0;
	}

	double CallPayoff(double z, double K) {
		if (z < K) return 0;
		return z - K;
	}

	int factorial(int n) {
		if (n == 0) return 1;
		return n * factorial(n - 1);
	}

	int combinations(int N, int n) {
		int res = 1;
		if (n < 0 || n > N) return 1;
		for (int i = 0; i < n; i++) {
			res = res * (N - i) / (i + 1);
		}
		return res;
	}
}
