/*
#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main() {
	map<char, int> s;
	char c = ' ';
	while (c != '.') {
		cin >> c;
		if (isalpha(c)) {
			c = tolower(c);
			s[c]++;
		}
	}
	for (map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
	return 0;
}
*/