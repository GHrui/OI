/**
 * String Task
 * O(n)
*/

#include<iostream>
#include<string>

int main (void) {
    std::string str;
    std::cin >> str;
    int length = str.length();
    char ans[2 * length];
    int j = 0;
    for (int i = 0; i < length; ++i) {
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I') {
            continue;
        }
        else {
            ans[j] = '.';
            ++j;
            if (str[i] >= 'A' && str[i] <= 'Z'){
                ans[j] = str[i] + 32;
                ++j;
            }
            else {
                ans[j] = str[i];
                ++j;
            }
        }
    }
    for (int i = 0; i < j; ++i) {
        std::cout << ans[i];
    }
    // getchar();
    // getchar();
    return 0;
}

