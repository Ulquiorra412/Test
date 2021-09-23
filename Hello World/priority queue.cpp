/*
#include <iostream>
#include <iterator>
#include <algorithm>
#include <queue>
#include <random>
#include <time.h>
using namespace std;

const int MAX = 2000;
const int MIN = 500;
class Cell;
priority_queue<Cell> cellQueue;

class Cell {
private:
	static int count;
	int id;
	int time;
public:
	Cell(int birth) : id(count++){
		time = birth + (rand() % (MAX - MIN)) + MIN;
	}
	int getID() const { return id; }
	int getSplitTime() { return time; }
	bool operator < (const Cell& s) const { return time > s.time; }
	void split() {
		Cell child1(time), child2(time);
		cout << "at " << time << "s #" << this->getID() << " split into #" << child1.getID() << " and #" << child2.getID() << endl;
		cellQueue.push(child1);
		cellQueue.push(child2);
	}
};

int Cell::count = 0;

int main() {
	int t;
	cout << "input simulation time: " << endl;
	cin >> t;
	srand(static_cast<unsigned> (time(0)));
	cellQueue.push(Cell(0));
	Cell top = cellQueue.top();
	while (top.getSplitTime() <= t) {
		top.split();
		cellQueue.pop();
		top = cellQueue.top();
	}
	return 0;
}
*/
