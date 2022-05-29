#include <iostream>
#include <cmath>
using namespace std;

// A simple program to calculate BMI using the metric system.

int main () {

    double weight, height, bmi, bmiRounded;

    cout << "Please enter your weight in kilograms." << endl;

    cin >> weight;

    cout << "Now enter your height in meters, and your BMI will be calculated to the nearest hundreth." << endl;

    cin >> height;


    bmi = weight / (height * height);

    bmiRounded = ceil(bmi * 100.0) / 100.0;



    cout << "Your BMI is: " << bmiRounded << endl;


    return 0;

}
