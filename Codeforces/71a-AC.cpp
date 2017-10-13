/*
 * Way Too Long Words
 * O(n)
**/

#include<iostream>
#include<string>

int main (void) {
    int n;
    std::cin >> n;
    std::string str[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> str[i];
    }
    for (int i = 0; i < n; ++i) {
        int length = str[i].length();
        if (length > 10) {
            std::cout << str[i][0] << length - 2 << str[i][length - 1] << "\n";
        }
        else {
            std::cout << str[i] << "\n";
        }
    }
    return 0;
}