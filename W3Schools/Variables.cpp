// Praccy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::string;

int main()
{
    //basic variables
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    std::string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    int myAge = 33;
    string myName = "Jon";
    std::cout << myName << " is " << myAge << " years old." << std::endl;
    std::cout << myText << " " << myName << std::endl;

    //multiple variables
    int x = 5, y = 5, z = 5;
    std::cout << x + y + z << std::endl;

    //identifiers
    int milesPerHours = 70;
    std::cout << "The speed limit is " << milesPerHours << std::endl;

    //constants
    const float PI = 3.14;
}
