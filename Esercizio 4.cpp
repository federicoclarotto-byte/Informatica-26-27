/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

int main(){
    
    std::string nome;
    std::string cognome;
    std::string classe;
    std::string età;
    std::string email;
    
    
    std::cout << "Inserisci il tuo nome: ";
    std::cin >> nome;
    std::cout << "Inserisci il tuo cognome: ";
    std::cin >> cognome;
    std::cout << "Inserisci la tua classe: ";
    std::cin >> classe;
    std::cout << "Inserisci la tua età: ";
    std::cin >> età;
    std::cout << "Inserisci il tuo indirizzo e-mail: ";
    std::cin >> email;
    int chiocciola = email.find('@');
    if (chiocciola > 3){
        for (int a = 3; a < chiocciola; a++){
            email[a] = '*'; 
        }
    }
    
{
    std::cout << "Nome: " + nome << std::endl;
    std::cout << "Cognome: " + cognome << std::endl;
    std::cout << "Classe: " + classe << std::endl;
    std::cout << "Età: " + età << std::endl;
    std::cout << "Email: " + email << std::endl;
    
    }
    
    return 0;
}