#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	int books;
	std::cin >> books;
	std::vector<int> prices;
	for (int i = 0; i < books; i++) {
		int myint;
		std::cin >> myint;
		prices.push_back(myint);
	}
	std::make_heap(begin(prices), end(prices));
    int sum = 0;
    for (int i = 0; i < books; i++) {
        std::pop_heap(prices.begin(), prices.end());
        if ((i+1) % 3 != 0) {
			sum += prices.back();
		}
        prices.pop_back();
    }
    std::cout << sum << std::endl;
}