#include <iostream>
#include <string>

// message 
std::string message{"The program is working"} ;
std::string mess_1{"this is the final result!"} ;

void tryChange(int x) {
    x = 10 ;
}

void refChange(int& e) {
    e = 20 ;
}

void ptrChange(int* p) {
    if(p) {
        *p = 30 ;
    }
}

int main () {
    std::cout << message << std::endl ;
    int a{999}, b{998}, c{997} ;

    // =========
    tryChange(a) ;
    refChange(b);
    ptrChange(&c) ;
    std::cout << mess_1 << std::endl ;
    std::cout << a << '\n'  
              << b << '\n'
              << c << '\n'
              << std::endl ;

    return 0 ;
}