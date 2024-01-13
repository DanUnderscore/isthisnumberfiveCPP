#include <iostream>

using namespace std;

void myFunction() {
    int yourNumber = 0;

    cout << endl << endl << "input a number. (any number below the 32-bit integer limit which is 2'147'483'647)" << endl
         << "your number: ";
    
    cin >> yourNumber;

    if (cin) {

      if (yourNumber > 5) {cout << "this number is bigger than 5.";}
      else if (yourNumber == 5) {cout << "this number is 5.";}
      else {cout << "this number is not bigger than 5";}
}
    else {
      
      cout << "this number is not a number";
      cin.clear();
      cin.ignore(10000, '\n'); // dont even try
    }
}
    

int main() {
  while(true) {myFunction();} // i think it would be bad practice if i looped inside main()

  return 0;
}