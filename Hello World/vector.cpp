/*
#include <iostream>
#include <vector>
using namespace std;
double average(const vector<double> &A) {
	double res = 0;
	for (auto e: A) {
		res += e;
	}
	return res / A.size();
}
int main() {
	int n;
	cout << "input the value of n";
	cin >> n;
	vector<double> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "The average is " << average(arr) << endl;
	return 0;
}
*/