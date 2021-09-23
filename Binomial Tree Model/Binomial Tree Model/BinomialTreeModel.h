#pragma once
namespace fre {
	//compute the risk neutral probability.
	double RiskNeutProb(double U, double D, double R);

	//compute the asset price at n, i.
	double CalculateAssetPrice(double S0, double U, double D, int n, int i);

	//input, display, and check model data.
	int GetInputData(double& S0, double& U, double& D, double& R);

	//validate input data for binomial tree model.
	int ValidateInputData(const double& S0, const double& U, const double& D, const double& R);
}
