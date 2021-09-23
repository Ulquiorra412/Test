/*
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	int getX() { return x; }
	int getY() { return y; }
	friend float distance(const Point &A, const Point &B);
};

float distance(const Point &A, const Point &B) {
	double deltax = A.x - B.x;
	double deltay = A.y - B.y;
	return static_cast<float> (sqrt(deltax * deltax + deltay * deltay));
}

int main() {
	const Point P1(3, 4), P2(7, 5);
	cout << "The distance is" << distance(P1, P2) << endl;
	return 0;
}
*/