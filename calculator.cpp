#include <iostream>
using namespace std;

class Calculator {
public:
    void add() {
        double a, b;
        cout << "Enter two numbers to add: ";
        cin >> a >> b;
        cout << "Sum: " << a + b << endl;
    }

    void subtract() {
        double a, b;
        cout << "Enter two numbers to subtract: ";
        cin >> a >> b;
        cout << "Difference: " << a - b << endl;
    }

    void multiply() {
        double a, b;
        cout << "Enter two numbers to multiply: ";
        cin >> a >> b;
        cout << "Product: " << a * b << endl;
    }

    void divide() {
        double a, b;
        cout << "Enter two numbers to divide: ";
        cin >> a >> b;
        if(b != 0)
            cout << "Quotient: " << a / b << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }
};

int main() {
    Calculator calc;
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    return 0;
}
