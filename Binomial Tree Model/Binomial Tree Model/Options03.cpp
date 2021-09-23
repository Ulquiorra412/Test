#include <cmath>
#include "BinomialTreeModelv2.h"
using namespace std;

namespace fre {
	double* PriceByCRR(const BinomialTreeModel& Model, int N, double K, double (*Payoff)(double z, double K)) {
		double q = Model.RiskNeutProb();
		double* Price = new double[N + 1];
		// memset(Price, 0, sizeof(Price));
		for (int i = 0; i <= N; i++) {
			Price[i] = Payoff(Model.CalculateAssetPrice(N, i), K);
		}
		for (int n = N - 1; n >= 0; n--) {
			for (int i = 0; i <= n; i++) {
				Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / Model.GetR();
			}
		}
		return Price;
	}
}