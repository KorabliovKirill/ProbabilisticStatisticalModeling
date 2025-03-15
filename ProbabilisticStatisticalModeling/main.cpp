#include <iostream>

class Point {
private:
	double X;
	double Y;
public:
	Point(double X, double Y) : X(X), Y(Y) {};

	double GetX() {
		return this->X;
	}

	double GetY() {
		return this->Y;
	}
};

int main() {
	Point A(1.0, 2.0);

	std::cout << A.GetX() << std::endl;
	std::cout << A.GetY() << std::endl;
}