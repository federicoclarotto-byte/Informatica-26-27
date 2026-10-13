/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    
    int a;{
    std::cout << "Inserisci il primo numero: ";
    std::cin >> a;
    int b;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> b;
    
    if (a > b)
        std::cout << ">>>>";
        else if (a < b)
            std::cout << "<<<<";
        else if (a = b)
            std::cout << "====";
        
        }
    return 0;
    
}