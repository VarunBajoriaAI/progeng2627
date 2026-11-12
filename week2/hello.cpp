#include <iostream>
int main(){
    int i = 2, j = 1, n = 0;
    for(; i < 4; i++){
        for(; j < 5; j++){
            n++;
                std::cout << i << j << std::endl;
                
        }
    }
    std::cout << n << std::endl;}