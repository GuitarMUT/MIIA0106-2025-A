#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string studentID;
	string studentName;
	float score;
	string grade;

	cout << "Enter student ID: ";
	cin >> studentID;

	cout << "Enter student name: ";
	cin.ignore();
	getline(cin, studentName);

	cout << "Enter score: ";
	cin >> score;

	if (score >= 90 && score <= 100) {
		grade = "A";
	}
	else if (score >= 80 && score < 90) {
		grade = "B";
	}
	else if (score >= 70 && score < 80) {
		grade = "C";
	}
	else if (score >= 60 && score < 70) {
		grade = "D";
	}
	else if (score >= 0 && score < 60) {
		grade = "F";
	}
	else {
		grade = "Error";
	}

	cout << "\nWWWWWWWWWWWWWWWW Student Report WWWWWWWWWWWWWWWW" << endl;

	cout << left << setw(15) << "Student ID" << ": " << studentID << endl;
	cout << left << setw(15) << "Name" << ": " << studentName << endl;
	cout << left << setw(15) << "Score" << ": " << score << endl;
	cout << left << setw(15) << "Grade" << ": " << grade << endl;

	cout << "MMMMMMMMMMMMMMMM Goodluck MMMMMMMMMMMMMMMM" << endl;

	return 0;
}