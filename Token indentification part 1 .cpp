#include <iostream>
#include <iostream>
#include <string>

using namespace std;

bool isNumeric(string input) {
    bool numeric = true;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            numeric = false;
            break;
        }
    }
    return numeric;
}

int main() {
    string input;
    cout << "Enter a value: ";
    cin >> input;
    if (isNumeric(input)) {
        cout << "The given input is numeric." << endl;
    } else {
        cout << "The given input is non-numeric." << endl;
    }
    return 0;
}

