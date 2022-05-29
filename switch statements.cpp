#include <iostream>

using namespace std;

// A program to practice switch statements, still not very familiar/comfortable with them.
// A simple arthimetic expression is received, then calculated.

int main () {

    double arg1, arg2;
    double res;
    char op;
    cout << "Please enter an expression in the form arg1 op arg2" << endl;

    cin >> arg1 >> op >> arg2;

    switch(op) {

            case '+':
                res = arg1 + arg2;
                cout << res << endl;

                break;

            case '*':
                res = arg1 * arg2;
                cout << res << endl;
                break;

            case '/':
                if (arg2 != 0) {
                    res = arg1 / arg2;
                    cout << res << endl;
                    break;
                }
            case '-':
                res = arg1 - arg2;
                cout << res << endl;
            default:
                cout << "This is an illegal expression in the scope of this program." << endl;
                break;

    }


    return 0;

}





