#include <iostream>

using namespace std;

int main () {

  cout << "Enter two of your grades, separated by a space, to check if you passed or failed." << endl;

  int grade1, grade2;

  cin >> grade1 >> grade2;

  if (grade1 >= 95 && grade2 >= 95)
        cout << "Woo-hoo, y8888ou passed with honors!";
  else if (grade1 < 65 && grade2 < 65)
        cout << "Uh oh... you failed. ";
  else
        cout << "You passed!";




    return 0;

}
