/*
#include <iostream>
using namespace std;

class CException {
public:
	CException() {}
	virtual ~CException() {}
	void Reason() { cout << "CException." << endl; }
};

void func1() {
	throw CException();
}

int main() {
	try {
		func1();
	}
	catch (CException & ce) {
		ce.Reason();
	}
	return 0;
}
*/