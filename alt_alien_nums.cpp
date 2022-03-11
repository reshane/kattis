#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

string numtolang(int num, string lang) {
    int i = 0;
    while (pow(lang.length(), i)-1 < num) {
        i++;
    }
    // here, i = num of digits+1
    string t_num = "";
    for (i = i-1; i > -1; i--) {
        t_num += lang[num / (int)pow(lang.length(), i)];
        num %= (int)pow(lang.length(), i);
    }
    return t_num;
}
int langtonum(string num, string lang) {
    int sum = 0;
    for (int i = 0; i < num.length(); i++) {
        sum += lang.find(num[i]) * pow(lang.length(), num.length()-1-i);
    }
    return sum;
}

int main() {
    int cases;
    vector<string> ans;
    string num, s_lang, t_lang;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> num >> s_lang >> t_lang;
        int decsrc = langtonum(num, s_lang);
        ans.push_back(numtolang(decsrc, t_lang));
    }
    for (int i = 0; i < cases; i++) {
        cout << "Case #" << (i+1) << ": " << ans[i] << endl;
    }
    //cout << langtonum("FF", "0123456789ABCDEF") << endl;
    //cout << numtolang(255, "0123456789ABCDEF") << endl;
}