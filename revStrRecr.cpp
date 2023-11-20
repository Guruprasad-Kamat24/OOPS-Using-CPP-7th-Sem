#include <iostream>
#include <string>

using namespace std;

string reverseString(string str, int start, int end) {
    if (start >= end) {
        return str;
    }

    swap(str[start], str[end]);

    return reverseString(str, start + 1, end - 1);
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input, 0, input.length() - 1);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}

