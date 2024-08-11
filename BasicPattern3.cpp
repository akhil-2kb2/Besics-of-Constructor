#include <iostream>

class Pattern {
public:
    void printPattern() {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j-1 <= i-1; j++) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Pattern pattern;
    pattern.printPattern();
    return 0;
}
