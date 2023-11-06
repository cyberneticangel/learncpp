#include <iostream> // for std::cout and std::cin

int main() {

    std::cout << "Enter two numbers seperated by a space: "; // ask user for 2 numbers

    int x{}; // define variable x to hold user input 1
    int y{}; // define variable y to hold user input 2

    std::cin >> x >> y; // get input 1 and input 2 and store in x/y variable respectively, here we use the extraction operator ">>", it is used e.g. when getting user input
    std::cout << "You entered: " << x << " and " << y << "\n";

    return 0;
}
/* Best Practice:
     There’s some debate over whether it’s necessary to initialize a variable immediately before you give it a user provided value via another source (e.g. std::cin), since the user-provided value will just overwrite the initialization value. In line with our previous recommendation that variables should always be initialized, best practice is to initialize the variable first.
*/

