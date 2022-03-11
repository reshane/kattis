#include <iostream>
#include <string>
#include <math.h>

int main() {
    int conversions;
    std::cin >> conversions;
    for (int j = 0; j < conversions; j++) {
        std::string source, s_lang, t_lang, t_num = "";
        std::cin >> source >> s_lang >> t_lang;
        int s_index = 1, t_index = 0;
        int sum = 0;
        for (int index = source.length()-1; index > -1; index--) {
            sum += s_lang.find(source[index]) * (int)pow(s_lang.length(), source.length() - (index+1));
        }
        int i = 0;
        while (sum / (int)pow(t_lang.length(), i) != 0) {
            i++;
        }
        for (i = i - 1; i > -1; i--) {
            t_num += t_lang[sum / (int)pow(t_lang.length(), i)];
            sum %= (int)pow(t_lang.length(), i);
        }
        std::cout << "Case #" << (j+1) << ": " << t_num << std::endl;
    }
} // FF 0123456789ABCDEF 01