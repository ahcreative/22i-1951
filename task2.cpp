#include <iostream>
#include <math.h>
using namespace std;
class Point {
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	void setX(int x1) {
		x = x1;
	}
	void setY(int y1) {
		y = y1;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	double distance(int x1, int y1) {
		return sqrt((y1 - y) * (y1 - y) + (x1 - x)* (x1 - x));
	}
};
int main() {
	Point p;
	int x2, y2 = 0;
	cout << "Enter the value of X cordinate: ";
	cin >> x2;
	p.setX(x2);

	cout << "Enter the value of Y cordinate: ";
	cin >> y2;
	p.setY(y2);

	cout << "Enter updated value of X cordinate: ";
	cin >> x2;

	cout << "Enter updated value of Y cordinate: ";
	cin >> y2;

	cout << "Distance: " << p.distance(x2, y2);
	return 0;
}