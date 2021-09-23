#pragma once
namespace INTEGRAL {
	class integral {
	private:
		double a;
		double b;
		double (*f)(double);
	public:
		integral();
		integral(double a_, double b_, double (*f_)(double));
		void setParameters(double a_, double b_, double (*f_)(double));
		double integralByTrapezoidal(int N);
		double integralBySimpson(int N);
		int validateData();
	};
}