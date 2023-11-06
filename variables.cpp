#include <iostream>

int main() {
    // int x; // definition of a variable named x, of type int. "x" is the identifier we assigned, default Initialization
    /* double width;  assignment, or giving the variable a value using the = operator
    width = 5; this however requires 2 statements */
    int width = 5; // this combines definition and declaration, the combination of these two operations is called Initialization
    int y, z; // define multiple variables at once
    int width(5); // direct Initialization
    /* The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. Informally, this is called list initialization (or uniform initialization or brace initialization). */
    int width{5}; // direct list initialization of value 5 into variable width
    int height = {6}; // copy list Initialization of value 6 into variable height
    int depth {}; // value initialization also known as zero Initialization to value 0
    // use an explicit initialization value if you're actually using that value
    int x{0}; // explicit initialization to value 0
    std::cout << x << std::endl; // using that 0 value
    // use value initialization if the value is temporary and will be replaced
    int x{}; // value initialization
    std::cin >> x; // we're immediately replacing that value
    /* initialization of multiple variables. */
    int a = 5, b = 6; // copy initialization
    int c(7), d(8); // direct initialization
    int e{9}, f{10}; // direct brace initialization
    int g = {9}, h = {10}; // copy brace initialization
    int i{}, int j{}; // value initialization
    [[maybe_unused]] int x{5}; // solution for variables that might not end up getting used, without producing compile time errors, won't generate warnings
}

/* ^^ best practice: use direct list initialization (also known as uniform initialization) */

/* data types tell the compiler what kind of value the variable will store. in C++ objects are regions of storage (in RAM). */
