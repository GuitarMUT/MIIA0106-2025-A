#include <iostream>
#include <string>
using namespace std;
int main() {
	int age = 19;
	float height = 180;
	string name = "Purit Supto";
	int studentid1 = 68111;
	int studentid2 = 30051;
	float gpa = 3.86;

	cout << "Student Profile" << endl;
	cout << "------------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << " cm" << endl;
	cout << "Student ID: " << studentid1 << studentid2 << endl;
	cout << "GPA: " << gpa << endl;
	return 0;
}