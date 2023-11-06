#include <iostream> // needed for std::cout and other functions
#include <string> // needed for the string data type

int main() {
    std::string name{"Dylan"};
    int x{5};
    std::cout << "x is equal to: " << x << "\n";
    std::cout << "My name is: " << name << "\n";// << is the insertion operator, it inserts the given integer x we defined in line 4. can also concatenate multiple things using <<
    return 0; /* std::endl prints a new line character so the next std::cout statement is on a seperate line, however \n is more efficient and is best practice */
}
