#include<iostream>

int func(int a, int d);
void out(int a, int b, int c, int d);

int main (void) {
    int a = 3;
    int b = 5;
    int c = a * b;
    int d = 999;
    out(a, b, c, d);
    return 0;
}

void out (int a, int b, int c, int d) {
    std::cout << func(a, d) + func(b, d) - func(c, d) << "\n";    
}

int func (int a, int d) {
    int temp;
    temp = b / a;
    return a * (temp * (temp + 1) / 2);
}