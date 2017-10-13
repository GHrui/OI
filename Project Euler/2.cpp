/**
 * Even Fibonacci Numbers
 * O(n)
*/

#include<iostream>

int isEven(int a);

int main (void) {
    int n = 4000000;
    int a = 1;
    int b = 1;
    int temp = 1;
    int sum = 0;
    while (sum < n) {
        a = temp;
        b = a;
        temp = a + b;
        if (isEven(temp)) {
            //std::cout << temp << "\n";
            sum += temp;
        }
    }
    std::cout << sum << "\n";
    return 0;
}

int isEven (int a) {
    if (a % 2 == 0) {
        return 1;
    }
    return 0;
}