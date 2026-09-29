/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int lvl = 0;
    std::cout << "Inserisci un livello di Fizzbuzz ";
    while (lvl <= 1){
        std::cin >> lvl;
        if (lvl <= 1)
            std::cout << "ERRORE! Inserisci un valore > 1! \n"
    }
    
    std::cout << "Grazie. Calcolo Fizzbuzz fino al numero "
            << lvl << "\n";
            
    // Algoritmo di calcolo FizzBuzz
    for(int i=1; i <= lvl; i++){
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " Fizzbuzz \n"; // Stampa FizzBuzz
       }else if (i%3 == 0){ // Altrimenti, se è solo divisibile per 3 stampa Fizz
            std::cout << i << " Fizz \n";
        else if (i%5 == 0){ // Altrimenti, se è solo divsibile per 5 stampa Buzz
            std::cout << i << " Buzz \n";
            
        }
    }
    
    return 0;
}