#include <iostream>

using namespace std;

/* This program receives the number of days you traveled and
    converts it to weeks and leftover days. I'm proud of this
    one because the if statement was not included in the class
    file. I added it myself so that the singular and plural of
    day would accurately reflect the leftover number. */

const int DAYS_IN_A_WEEK = 7;

int main(){

    int daysTraveled = 0;

    cout << "Please enter the number of days you traveled" << endl;

    cin >> daysTraveled;

    int weeksTraveled = daysTraveled / DAYS_IN_A_WEEK;

    int leftoverDays = daysTraveled % DAYS_IN_A_WEEK;


    if (leftoverDays == 1) {

        cout << daysTraveled << " days is " << weeksTraveled << " weeks and " << leftoverDays << " day. " << endl;

        }

        else {
            cout << daysTraveled << " days is " << weeksTraveled << " weeks and " << leftoverDays << " days. " << endl;
        }


  return 0;

}
