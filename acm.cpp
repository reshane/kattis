#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int time = 0;
    std::cin >> time;
    std::unordered_map<char, int> totals;
    char problem;
    std::string correct;
    int total = 0, num_correct = 0;
    while (time != -1) {
        std::cin >> problem;
        std::cin >> correct;
        if (correct[0] == 'r') {
            total += time + totals[problem];
            num_correct++;
        } else {
            totals[problem] += 20;
        }
        std::cin >> time;
    }
    printf("%d %d\n", num_correct, total);
}