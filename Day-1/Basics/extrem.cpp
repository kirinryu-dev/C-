#include <iostream>
#include <string>

// global message 
std::string message_0 = "=== Good evening Developer ===" ; 

void firstValue(int x) {
    x = 999 ;

}

void secondValue(int y) {
    y = 999 ;
}

void thirdValue(int& x) {
    x = 999 ;

}


int main() {
    std::cout << message_0 << std::endl ;
    int a = 10 ;
    int b = 10 ;
    int c = 10 ;

    firstValue(a) ;
    secondValue(b) ;
    thirdValue(c) ;

    std::cout << a << '\n' ;
    std::cout << b << '\n' ;
    std::cout << c << '\n' ; 


    return 0 ;
}