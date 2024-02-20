#include <iostream>

int main() {
    char charValue = 'A';
    int intValue = 5;
    float floatValue = 3.14f;
    double doubleValue = 2.71828;
    long long longLongValue = 1234567890123456789LL;
    short shortValue = 32767;

    std::cout << "Address of char: " << static_cast<void*>(&charValue) << std::endl;
    std::cout << "Address of int: " << &intValue << std::endl;
    std::cout << "Address of float: " << &floatValue << std::endl;
    std::cout << "Address of double: " << &doubleValue << std::endl;
    std::cout << "Address of long long: " << &longLongValue << std::endl;
    std::cout << "Address of short: " << &shortValue << std::endl;

    return 0;
}
