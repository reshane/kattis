#include <iostream>

int main() {
    int data[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> data[i];
    }
    for (int i = sizeof(data)/sizeof(data[0]) - 1; i > -1; i--) {
        int j = 0;
        while (j < i) {
            if (data[j] < data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
            j++;
        } 
    }
    for (int i = 0; i < 3; i++) {
        char in;
        std::cin >> in;
        switch (in) {
            case 'A':
                printf("%d ", data[2]);
                break;
            case 'B':
                printf("%d ", data[1]);
                break;
            case 'C':
                printf("%d ", data[0]);
                break;
        }
    }
}