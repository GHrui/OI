#include<iostream>

int main(void){
    unsigned long long int a, m, n;
    std::cin >> n >> m >> a;
    unsigned long long int ans = ((n % a == 0 ? (n / a) : (n / a + 1)) * (m % a == 0 ? (m / a) : (m / a + 1)));
    std::cout << ans << "\n";
    return 0;
}