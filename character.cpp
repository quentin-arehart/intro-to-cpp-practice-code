#include <iostream>

using namespace std;

// Branching statements practice

/* This program receives a single character as input
    and determines whether it is an alphanumeric or
    non alphanumeric character. It also specifies
    upper and lowercase, and numbers. */

int main () {


    cout << "Please enter a single character." << endl;

    char x; // arbitrary name, I like using x for this one.

    cin >> x;

    if (x >= 'a' && x <= 'z')
        cout << x << " is a lowercase character. ";

    else if (x >= 'A' && x<= 'Z')
        cout << x << " is an uppercase character. ";

    else if (x >= '0' && x <= '9')
        cout << x << " is a numeric character. ";

    else
        cout << x << " is not an alphanumeric character. ";


    return 0;
}
