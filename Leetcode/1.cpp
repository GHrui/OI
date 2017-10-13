/**
 * Two Sum
 * O(n ^ 2) = O((n-1) * (n-2) / 2)
*/

#include<iostream>

int main (void) {
    int array[] = {2, 7, 11, 15};
    int target = 9;
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (array[i] + array[j] == target) {
                std::cout << i << j << "\n";
            }
        }
    }
    return 0;
}