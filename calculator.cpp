//Making a simple calculator with C++

#include <iostream>
using namespace std;

int main() {
    char x;                             //x is the operation
    double N1, N2, result;

    cout << "Enter first number(a): ";
    cin >> N1;

    cout << "Choose any operator (+, -, *, /): ";
    cin >> x;

    cout << "Enter second number(b): ";
    cin >> N2;

    switch (x) {
        case '+':
            result = N1 + N2;
            cout << "The summation of a & b = " << result << endl;
            break;
        case '-':
            result = N1 - N2;
            cout << "The subtraction of a & b = " << result << endl;
            break;
        case '*':
            result = N1 * N2;
            cout << "The multiplication of a & b= " << result << endl;
            break;
        case '/':
            if (N2 != 0) {
                result = N1 / N2;
                cout << "The division of a & b = " << result << endl;
            } else {
                cout << "Divide by zero error." << endl;
            }
            break;
        default:
            cout << "No such type of operator!" << endl;
    }

    return 0;
}