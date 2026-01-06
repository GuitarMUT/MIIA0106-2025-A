#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};

void inputData(Student &s) {
	cout << "Input Student ID: ";
	cin >> s.id;
	cout << "Input Nickname: ";
	cin >> s.nickname;
	cout << "Input Line ID: ";
	cin >> s.lineId;

	cout << "Input Student Mobile: ";
	cin >> s.myContact.mobile;
	cout << "Input Student Home: ";
	cin >> s.myContact.home;

	cout << "Input Parent Name: ";
	cin >> s.myParent.name;
	cout << "Input Relationship: ";
	cin >> s.myParent.relationship;

	cout << "Input Parent Mobile: ";
	cin >> s.myParent.contact.mobile;
	cout << "Input Parent Home: ";
	cin >> s.myParent.contact.home;
}

void showData(Student s) {
	cout << "\n--- Student Data ---" << endl;
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;

	cout << "Mobile: " << s.myContact.mobile << endl;
	cout << "Home: " << s.myContact.home << endl;

	cout << "\n--- Parent Data ---" << endl;
	cout << "Name: " << s.myParent.name << endl;
	cout << "Relationship: " << s.myParent.relationship << endl;
	cout << "Mobile: " << s.myParent.contact.mobile << endl;
	cout << "Home: " << s.myParent.contact.home << endl;
}

int main() {
	Student s;
	inputData(s);
	showData(s);
	return 0;
}