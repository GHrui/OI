/** 
 * Watermelon
 * O(1)
*/

#include<iostream>

int divEven(int w);
int isEven(int n);

int main (void) {
    int w;
    std::cin >> w;
    if (divEven(w)) {
        std::cout << "YES" << "\n";
    }
    else {
        std::cout << "NO" << "\n";
    }
    return 0;
}

int divEven (int w) {
    int flag = 0;
    for (int i = 2; i < w; i += 2) {
        if (isEven(w - i)) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int isEven (int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}