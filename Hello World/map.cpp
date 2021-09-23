/*
#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

int main() {
	map <string, int> courses;
	courses.insert(make_pair("C++", 3));
	courses.insert(make_pair("Java", 3));
	courses.insert(make_pair("Python", 2));
	courses.insert(make_pair("algorithms", 4));
	courses.insert(make_pair("data structures", 4));
	int n = 3;
	int sum = 0;
	while (n > 0) {
		string name;
		cin >> name;
		map<string, int>::iterator iter = courses.find(name);
		if (iter == courses.end())
			cout << name << " is not available." << endl;
		else {
			sum += iter->second;
			courses.erase(iter);
			n--;
		}
		cout << "Total credit: " << sum << endl;
	}
	return 0;
}
*/