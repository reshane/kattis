#include <iostream>
#include <string>

int main() {
    std::string jma, reqa;
    std::cin >> jma;
    std::cin >> reqa;
    if (jma.length() >= reqa.length()) {
        std::cout << "go" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
}