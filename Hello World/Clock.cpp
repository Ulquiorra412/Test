/*
#include <iostream>
using namespace std;

class Clock {
private:
	int hour, minute, second;
public:
	Clock(int newH, int newM, int newS);
	Clock();
	void setTime(int newH, int newM, int newS);
	void showTime();
};

Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}
//Clock::Clock() : hour(0), minute(0), second(0) {}
Clock::Clock() : Clock(0, 0, 0) {}

void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ':' << minute << ':' << second << endl;
}

int main() {
	Clock c1(9, 12, 15);
	Clock c2;
	c1.showTime();
	c2.showTime();
	c1.setTime(21, 13, 8);
	c1.showTime();
	return 0;
}
*/