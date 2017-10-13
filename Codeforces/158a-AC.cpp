// Next Round

#include<iostream>

int main (void) {
    int n;
    int k;
    int sum = 0;
    std::cin >> n >> k;
    int score[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> score[i];
    }
    int temp = score[k - 1];
    int j = 0;
    while (j < k || score[j] == temp) {
        if (score[j] == 0 || j >= n) {
            break;
        }
        ++sum;
        ++j;
    }
    std::cout << sum << '\n';
    getchar();
    getchar();
    return 0;
}