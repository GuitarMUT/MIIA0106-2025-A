#include <iostream>

using namespace std;
double circleArea(double radius) {
	const double PI = 3.1416;
	return PI * radius * radius;
}
double rectArea(double width, double height) {
	return width * height;
}

int main() {
	double r; double w; double h;

	cout << "กรอกค่า radius: ";
	cin >> r;
	cout << "กรอกค่า radius: ";
	cin >> w;
	cout << "กรอกค่า radius: ";
	cin >> h;
	cout << "พื้นที่วงกลม = " << circleArea(r) << endl;
	cout << "พื้นที่สี่เหลี่ยม = " << rectArea(w, h) << endl;
	return 0;
}