/*
#include <iostream>
using namespace std;

class vehicle {
public:
	int maxspeed;
	int weight;
	virtual void run() {
		cout << "Now is running." << endl;
	}
	virtual void stop() {
		cout << "Now stopped." << endl;
	}
};

class bike : virtual public vehicle {
public:
	int height;
	void run() {
		cout << "Now bike is running." << endl;
	}
	void stop() {
		cout << "Now bike stopped." << endl;
	}
};

class automobile : virtual public vehicle {
public:
	int numsOfSeats;
	void run() {
		cout << "Now automobile is running." << endl;
	}
	void stop() {
		cout << "Now automobile stopped." << endl;
	}
};

class motorcycle : virtual public bike, virtual public automobile {
public:
	void info() {
		cout << height << ' ' << weight << ' ' << maxspeed << ' ' << numsOfSeats << endl;
	}
	void run() {
		cout << "Now motorcycle is running." << endl;
	}
	void stop() {
		cout << "Now motocycle stopped." << endl;
	}
};

int main() {
	vehicle v;
	v.run();
	v.stop();
	bike b;
	b.run();
	b.stop();
	automobile a;
	a.run();
	a.stop();
	motorcycle m;
	m.height = 1;
	m.numsOfSeats = 2;
	m.weight = 100;
	m.maxspeed = 60;
	m.info();
	m.run();
	m.stop();
	vehicle* vp = &v;
	vp = &v;
	vp->run();
	vp->stop();
	vp = &b;
	vp->run();
	vp->stop();
	vp = &a;
	vp->run();
	vp->stop();
	vp = &m;
	vp->run();
	vp->stop();
	return 0;
}
*/