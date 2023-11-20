#include <iostream>
using namespace std;

class Calculator {
public:
    int square(int num) {
        return num * num;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    Calculator calc; // Create an instance of the Calculator class
    int result = calc.square(num);

    cout << "The square of " << num << " is: " << result << endl;

    return 0;
}
