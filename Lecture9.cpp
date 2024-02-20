#include <iostream>

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Input two numbers
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the add function and display the result
    int result = add(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
