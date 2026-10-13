/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    
    for (int a = 1; a <= 1000; a++){
        if (a % 2 == 0){
            std::cout << a << std::endl;
    }   else
            std::cout << "";
    }
    return 0;
    
}