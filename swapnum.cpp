#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Before swapping: " << num1 << " " << num2 << " " << num3 << endl;

    swapNumbers(num1, num2);
    swapNumbers(num2, num3);

    cout << "After swapping: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}

