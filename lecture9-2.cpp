#include <iostream>

// Function with a static variable
void staticExample() {
    // Static variable retains its value across function calls
    static int staticVar = 0;
    
    // Increment the static variable
    staticVar++;

    std::cout << "Static Variable: " << staticVar << std::endl;
}

// Function with a local variable
void localExample() {
    // Local variable is created and destroyed each time the function is called
    int localVar = 0;

    // Increment the local variable
    localVar++;

    std::cout << "Local Variable: " << localVar << std::endl;
}

int main() {
    // Calling staticExample multiple times
    std::cout << "Static Variable Example:" << std::endl;
    staticExample();  // Static Variable: 1
    staticExample();  // Static Variable: 2
    staticExample();  // Static Variable: 3

    // Calling localExample multiple times
    std::cout << "\nLocal Variable Example:" << std::endl;
    localExample();   // Local Variable: 1
    localExample();   // Local Variable: 1
    localExample();   // Local Variable: 1

    return 0;
}
