#include <iostream>
#include <cmath>

using namespace std;

// This program calculates the area of a circle, but I should hope you don't need it.

int main() {

    double radius;

    cout << "Please enter the radius of the circle" << endl;

    cin >> radius;

    double areaCircle = M_PI * radius * radius;



    cout << "The area of the circle is " << areaCircle << endl;



    return 0;
}
