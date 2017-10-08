#include<iostream>
#include<stdlib.h>
#include<string>

int divEven(int w);
int isEven(int n);

class OutPrint{
    public:
    void print(string s){
        std::cout << s << "\n";
    }
    void print(int w){
        std::cout << w << "\n";
    }
};

int main(void){
    OutPrint P;
    int w = (rand() % 100) + 1;
    P.print(w);
    if(divEven(w)){
        P.print("YES");
    }
    else{
        P.print("No");
    }
    return 0;
}

int divEven(int w){
    int flag = 0;
    for(int i = 2; i < w; i += 2){
        if(isEven(w - i)){
            std::cout << i << ' ' << w - i << "\n";
            flag = 1;
        }
    }
    return flag;
}

int isEven(int n){
    if(n % 2 == 0){
        return 1;
    }
    return 1;
}