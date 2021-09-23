#include <iostream>
#include "trapezoidal.h"
#include <cmath>
using namespace std;
namespace INTEGRAL {
	double simpleLinear(double x) {
		return x;
	}

	integral::integral(): a(0), b(1), f(simpleLinear) {}
	integral::integral(double a_, double b_, double(*f_)(double)):a(a_), b(b_), f(f_) {}
	void integral::setParameters(double a_, double b_, double (*f_)(double)) {
		a = a_; b = b_; f = f_;
	}
	int integral::validateData() {
		if (a >= b) return -1;
		return 0;
	}

	double integral::integralByTrapezoidal(int N) {
		double* fx = new double[N + 1];
		double h = (b - a) / N;
		for (int i = 0; i <= N; i++) {
			double cur = a + h * i;
			fx[i] = f(cur);
		}
		double res = 0;
		res += fx[0] * h / 2; res += fx[N] * h / 2;
		for (int i = 1; i < N; i++) {
			res += h * fx[i];
		}
		delete[] fx;
		fx = NULL;
		return res;
	}

	double integral::integralBySimpson(int N) {
		double* fx = new double[N + 1];
		double h = (b - a) / N;
		for (int i = 0; i <= N; i++) {
			double cur = a + h * i;
			fx[i] = f(cur);
		}
		double res = 0;
		res += fx[0] * h / 3; res += fx[N] * h / 3;
		for (int i = 1; i < N; i++) {
			if (i % 2 == 0) { res += 2.0 / 3 * h * fx[i]; }
			else { res += 4.0 / 3 * h * fx[i]; }
		}
		delete[] fx;
		fx = NULL;
		return res;
	}
}