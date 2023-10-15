#include <iostream>
#include <string>


class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    std::string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print values
  // standard character output- scope resolution operator, followed by bitwise shift left operator, with string literal

  std::cout << myObj.myNum << "\n"; 
  std::cout << myObj.myString; 
  return 0;
}