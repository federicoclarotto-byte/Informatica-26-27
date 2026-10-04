/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
    for(int i=1; i <= 100; i++){
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " Fizzbuzz \n";
       }else if (i%3 == 0)
            std::cout << i << " Fizz \n";
        else if (i%5 == 0){ 
            std::cout << i << " Buzz \n";
            
        }
    }
    
    return 0;
}