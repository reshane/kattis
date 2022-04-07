/* prereq.cpp
 * shane kenny
 * 4/6/2022
 * 1.9
 */
#include <iostream>
#include <vector>
#include <algorithm>

int catSat(int total, int required, std::vector<int> category, std::vector<int> courses) {
    int matches = 0;
    for (int i = 0; i < total; i++) {
        if (std::count(courses.begin(), courses.end(), category[i])) {
            matches++;
        }
        if (matches >= required) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int courses, categories;
    std::cin >> courses;
    while (courses != 0) {
        std::cin >> categories;
        std::vector<int> crns;
        for (int i = 0; i < courses; i++) {
            int crn;
            std::cin >> crn;
            crns.push_back(crn);
        }
        int satisfies = 1;
        for (int i = 0; i < categories; i++) {
            int total, required;
            std::vector<int> category;
            std::cin >> total >> required;
            for (int i = 0; i < total; i++) {
                int crn;
                std::cin >> crn;
                category.push_back(crn);
            }
            if (catSat(total, required, category, crns) == 0) {
                satisfies = 0;
            }
        }
        if (satisfies == 1) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
        std::cin >> courses;
    }
}