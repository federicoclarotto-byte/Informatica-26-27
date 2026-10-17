/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    
    std::string nome;
    std::string password;
    std::string email;
    
    std::cout << "Inserisci il tuo nome utente: ";
    std::cin >> nome;
    std::cout << "Inserisci la tua password: ";
    std::cin >> password;
    std::cout << "Inserisci il tuo indirizzo email: ";
    std::cin >> email;
    
    
    std::string a;
    std::string b;
    std::cout << "Inserire il nome utente: ";
    std::cin >> a;
    std::cout << "Inserire la password: ";
    std::cin >> b;
        
    
    if (a == nome and b == password)
        std::cout << "Login effettuato.";
        else 
            std::cout << "Il nome utente o la password sono errati.";
        
    
    return 0;
}