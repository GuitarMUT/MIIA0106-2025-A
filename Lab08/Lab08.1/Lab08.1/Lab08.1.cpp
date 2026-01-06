#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    Student s1;
    cout << "-_-_-Student 1-_-_-\n";
    cout << "ID: ";
    cin >> s1.id;
    cout << "Nickname: ";
    cin >> s1.nickname;
    cout << "Line ID: ";
    cin >> s1.lineId;
    cout << "Phone: ";
    cin >> s1.phone;

    cout << "\n-_-_-Output Student 1-_-_-\n";
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "Phone: " << s1.phone << endl;
    return 0;
}
