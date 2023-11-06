#include <iostream> // preprocessor directive, "pastes" content from the iostream library into our "hello_world.cpp" file, used for std::cout on line 4

int main() { // the main() function is a special function every program needs in order to execute, it is the main entry in our program
    std::cout << "Hello, World!" << std::endl; // the first statement in our main function, prints "Hello, World!" to the console.
    return 0; // return statement, sends a value to the OS to indicate whether the program ran successfully or not, in this case "0" indicates success
}
