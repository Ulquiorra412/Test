#pragma once
#include "BinomialTreeModelv2.h"
namespace fre {
	// pricing European optiond
	double* PriceByCRR(const BinomialTreeModel& Model, int N, double K, double (*Payoff)(double z, double K));
}