#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here

  // Put data into the first structure
  myCar1.brand = "Suzuki";
  myCar1.model = "Mehran";
  myCar1.year = 2002;

  // Put data into the second structure
  myCar2.brand = "Honda";
  myCar2.model = "Civic";
  myCar2.year = 2020;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  return 0;
}

