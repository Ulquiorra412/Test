/*
#include <iostream>
#include <set>
#include <utility>
#include <iterator>
using namespace std;

int main() {
	set<double> s;
	while (true) {
		double v;
		cin >> v;
		if (v == 0) break;
		pair < set<double>::iterator, bool> r = s.insert(v);
		if (!r.second) {
			cout << v << "is duplicated." << endl;
		}
	}
	set<double> ::iterator iter1 = s.begin();
	set<double> ::iterator iter2 = s.end();
	double avg = (*iter1 + *(--iter2)) / 2;
	cout << "<= average:";
	copy(s.begin(), s.upper_bound(avg), ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << ">= average:";
	copy(s.lower_bound(avg), s.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
	return 0;
}
*/