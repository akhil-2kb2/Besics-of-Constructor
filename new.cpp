
#include <iostream>

class MyClass {
public:
    int x;

    // Constructor with no parameters
    MyClass() {
        x = 0;
    }

    // Constructor with parameter
    MyClass(int value) {
        x = value;
    }

    // Member function to print x
    void printX() {
        std::cout << "The value of x is: " << x << std::endl;
    }
};

int main() {
    MyClass obj1; // Create object using default constructor
    obj1.printX(); // Print the value of x for obj1

    MyClass obj2(5); // Create object using parameterized constructor
    obj2.printX(); // Print the value of x for obj2

    return 0;
}