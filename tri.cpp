/* tri.cpp
 * shane kenny
 * 4/6/2022
 * 1.7
 */
#include <iostream>
#include <string>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a==b+c) {printf("%d=%d+%d\n",a,b,c);}
    else if (a==b-c) {printf("%d=%d-%d\n",a,b,c);}
    else if (a==b/c) {printf("%d=%d/%d\n",a,b,c);}
    else if (a==b*c) {printf("%d=%d*%d\n",a,b,c);}
    else if (c==a+b) {printf("%d+%d=%d\n",a,b,c);}
    else if (c==a-b) {printf("%d-%d=%d\n",a,b,c);}
    else if (c==a/b) {printf("%db%d=%d\n",a,b,c);}
    else {printf("%d*%d=%d\n",a,b,c);}
}