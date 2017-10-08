#include<iostream>
#include<stdlib.h>

int square(int n, int m, int a);
int integer(int b, int a);

int main(void){
    int n = 6;//(rand() % 1e10) + 1;
    int m = 6;//(rand() % 1e10) + 1;
    int a = 4;//(rand() % 1e10) + 1;
    int ans = square(n, m, a);
    std::cout << ans << "\n";
    return 0;
}

int square(int n, int m, int a){
    n = integer(n, a);
    m = integer(m, a);
    return n * m;
}

int integer(int b, int a){
    if(b % a == 0){
        return b / a;
    }
    return b / a + 1;
}