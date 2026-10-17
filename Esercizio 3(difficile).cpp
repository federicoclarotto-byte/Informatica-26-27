/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    
    int n;
    std::cout << "Inserire un numero: ";
    std::cin >> n;
    
    if (n == 0){
        std::cout << 0;
    } else {
        int a = 0;
        int b = 1;
        
        while (n > 0){
            a = a + (n % 2) * b;
            n = n / 2;
            b = b * 10;
        }
        
        std::cout << a;
    }

    return 0;
}