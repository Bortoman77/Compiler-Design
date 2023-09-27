#include <iostream>
#include <string>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void listOperators(string expression) {
    cout << "Arithmetic Operators in the Expression: ";
    for (int i = 0; i < expression.length(); i++) {
        if (isOperator(expression[i])) {
            cout << expression[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression);
    listOperators(expression);
    return 0;
}
