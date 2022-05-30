#include <iostream>
using namespace std;

int main () {

    int num, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter a positive integer greater than 1:" << endl;
    cin >> num;

    for (int i = 1; i < num; i++) {
        // Prints first two terms
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";

    }

    return 0;
}
