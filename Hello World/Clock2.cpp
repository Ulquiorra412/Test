/*
#include <iostream>
using namespace std;
class Clock {
private:
	int hour, minute, second;
public:
	Clock(int h = 0, int m = 0, int s = 0) {
		if (0 <= h && h < 24 && 0 <= m && m < 60 && 0 <= s & s < 60) {
			this->hour = h;
			this->minute = m;
			this->second = s;
		}
		else cout << "Time error!" << endl;
	}

	void showTime() const {
		cout << hour << ':' << minute << ':' << second << endl;
	}

	Clock& operator ++() {
		second++;
		if (second >= 60) {
			second -= 60;
			minute++;
		}
		if (minute >= 60) {
			minute -= 60;
			hour = (hour + 1) % 24;
		}
		return *this;
	}

	Clock operator ++(int) {
		Clock oldtime = *this;
		++(*this);
		return oldtime;
	}
};

int main() {
	Clock c1(2, 0, 0);
	Clock c3(43, 89, 98);
	c3.showTime();
	c1.showTime();
	Clock c2(23, 59, 59);
	c2++.showTime();
	c2.showTime();
	return 0;
}
*/