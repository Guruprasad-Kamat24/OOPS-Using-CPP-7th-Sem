#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    MyClass() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    void functionNoParamsNoReturn() {
        cout << "This is a function with no parameters and no return value" << endl;
    }

    void functionWithParamsNoReturn(int a, int b) {
        int result = a + b;
        cout << "Sum: " << result << endl;
    }

    int functionWithParamsWithReturn(int a, int b) {
        return a * b;
    }

    double functionNoParamsWithReturn() {
        return 3.14;
    }

    static void staticFunction() {
        cout << "This is a static function" << endl;
    }
};

int main() {
    MyClass obj;

    obj.functionNoParamsNoReturn();
    obj.functionWithParamsNoReturn(5, 3);

    int result = obj.functionWithParamsWithReturn(4, 7);
    cout << "Multiplication: " << result << endl;

    double pi = obj.functionNoParamsWithReturn();
    cout << "Value of pi: " << pi << endl;

    MyClass::staticFunction();

    return 0;
}
