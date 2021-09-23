/*
#include <iostream>
#include <iterator>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	stack<char> s;
	string str;
	cin >> str;
	for (string::iterator iter = str.begin(); iter != str.end(); iter++) {
		s.push(*iter);
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	return 0;
}
*/