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
    
    if (n <= 1){
        std::cout << "Il numero non è primo!";
    } else {
        int a = 0;
        
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                a = a + 1;
            }
        }
        
        if (a == 0){
            std::cout << "Il numero è primo!";
        } else {
            std::cout << "Il numero non è primo!";
        }
    }

    return 0;
}