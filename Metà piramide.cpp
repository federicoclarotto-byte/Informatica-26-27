/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    int N;
    
    std::cout << "Inserisci un numero intero positivo:";
    std::cin >> N;
    
    if (N < 1){
        std::cout << "Errore! Il numero inserito non è corretto!\n";}
    else {
        for (int a = 1; a <= N; a++) {
            for (int b = 0; b < a; b++) {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }
    
    return 0;
}