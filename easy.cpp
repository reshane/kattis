/* easy.cpp
 * shane kenny
 * 4/6/2022
 * 1.5
 */
#include <iostream>
#include <string>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    while (n != 0) {
        int nsum = sumDigits(n);
        for (int i = 11; i < 100000; i++) {
            int test = i * n;
            if (sumDigits(test) == nsum) {
                std::cout << i << std::endl;
                break;
            }
        }
        std::cin >> n;
    }
}