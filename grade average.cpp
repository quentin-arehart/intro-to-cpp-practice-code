#include <iostream>
using namespace std;

// Caluclating the average grade for an arbitrary class of students.

int main () {

    int numOfStudents;
    int counter, curr;
    double average;

    cout << "Please enter the number of students in the class." << endl;

    cin >> numOfStudents;

    cout << "Enter the students' grades, separated by a space." << endl;

    int sum = 0;

    for (counter = 1; counter <= numOfStudents; counter++) {
        cin >> curr;
        sum += curr;

    }

    average = (double)sum / (double)numOfStudents; // casting double

    cout << "The grade average is " << average << endl;


    return 0;
}
