/* smile.cpp
 * shane kenny
 * 4/6/2022
 * 1.3
 */

#include <string>
#include <iostream>

int main() {
    std::string in;
    std::cin >> in;
    for (int i = 0; i < in.length() - 1; i++) {
        if (in[i] == ':' || in[i] == ';') {
            if (in.substr(i+1, 2) == "-)" || in[i+1] == ')') {
                std::cout << i << std::endl;
            }
        } 
    }
}