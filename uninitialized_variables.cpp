#include <iostream>

int main() {
    int x{}; // this is an uninitialized variable. value given by the compiler: 32767
    /* int x{}; -> value = 0 */
    std::cout << x << std::endl;
    return 0;

    /* notes. regarding initialization :
     - Initialization = The object is given a known value at the point of definition
     - Assignment = The object is given a known value beyond the point of definition
     - Uninitialized = The object has not been given a known value yet */

}
