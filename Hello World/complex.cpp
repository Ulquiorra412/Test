/*
#include <iostream>
using namespace std;
class Complex {
private:
	double real;
	double imag;
public:
	Complex(double r = 0.0, double i = 0.0) :real(r), imag(i) {}
	Complex operator + (const Complex& c2) const {
		return Complex(real + c2.real, imag + c2.imag);
	}
	Complex operator - (const Complex& c2) const {
		return Complex(real - c2.real, imag - c2.imag);
	}
	friend ostream& operator << (ostream& out, const Complex& c);
	void display() const {
		cout << '(' << real << ',' << imag << ')' << endl;
	}
};

ostream & operator << (ostream& out, const Complex& c) {
	out << "(" << c.real << ',' << c.imag << ')' << endl;
	return out;
}

int main() {
	Complex c1(3, 4), c2(2, 5), c3;
	c3 = c2 + c1;
	c3.display();
	c3 = c2 - c1;
	cout << c3;
	return 0;
}
*/