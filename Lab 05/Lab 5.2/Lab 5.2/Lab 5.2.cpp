#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int maxValue = a;
    if (b > maxValue) {
        maxValue = b;
    }
    if (c > maxValue) {
        maxValue = c;
    }
    return maxValue;
}

int main() {
    int number1;
    int number2;
    int number3;
    int result;

    cout << "Enter Number 1: ";
    cin >> number1;
    cout << "Enter Number 2: ";
    cin >> number2;
    cout << "Enter Number 3: ";
    cin >> number3;

    result = maxOfThree(number1, number2, number3);

    cout << "Maximum Value is: " << result << endl;
    return 0;
}
