#include <iostream>

using namespace std;

void isThisNumberFive() {
    double yourNumber = {};

    cout << endl << endl << "input a number." << endl
         << "your number: ";
    
    cin >> yourNumber;

    if (!(cin)) {
      cout << "your input is not a number or its too large";
      cin.clear();
      cin.ignore(10000, '\n'); // dont even try

      return;
    }

    if (yourNumber > 5) {cout << "this number is bigger than 5.";}
    else if (yourNumber == 5) {cout << "this number is 5.";}
    else {cout << "this number is not bigger than 5";}
}
    

int main() {
  while (true) {isThisNumberFive();}

}