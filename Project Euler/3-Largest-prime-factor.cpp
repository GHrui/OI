#include<iostream>

int main (void) {
    unsigned  long long q = 600851475143ULL;
    //int q = 6857;
    int i = 2;
    int array[10] = {0};
    int j = 0;
    while (i <= q) {
        if (q % i == 0) {
            array[j] = i;
            ++j;
            q /= i;
        }
        ++i;
    }
    for (int k = 0; k <= j; ++k) {
        std::cout << array[k] << "\n";
    }
    return 0;
}