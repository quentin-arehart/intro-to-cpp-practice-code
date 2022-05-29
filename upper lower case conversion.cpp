#include <iostream>

using namespace std;

// This program takes a lowercase letter and converts it to uppercase.

int main() {

    char lowerCase, upperCase;
    int offset;

    cout << "Please enter a lowercase letter" << endl;

    cin >> lowerCase;
    offset = (int)(lowerCase - 'a');

    upperCase = (char) (offset + 'A');

    cout << "The uppercase of " << lowerCase << " is " << upperCase << endl;




    return 0;
}
