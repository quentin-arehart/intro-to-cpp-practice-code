#include <iostream>
using namespace std;

//  This program receives an integer and prints the number of digits and their sum.

int main () {

    int num, num1, currDigit;

    cout << "Enter a positive integer" << endl;

    cin >> num1;

    num = num1; // num is holding the original value of num1 to be printed to the user

    int sumDigits = 0, countDigits = 0;

    while (num1 > 0) {
        currDigit = num%10;
        countDigits++;
        sumDigits += currDigit; //add currDigit to sum value]
        num1 = num1/10; // remove the ones digit from the integer

    }

    cout << num << " has " << countDigits << " digits ";
    cout << "and their sum is " << sumDigits << endl;

    return 0;
}
