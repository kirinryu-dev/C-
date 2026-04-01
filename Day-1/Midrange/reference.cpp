// understanding reference and pointer 
#include <iostream>
#include <string>
// reference simple and safe

int firstRef (int a ) {
    std::string message{"not quite"} ;
    std::cout << message << std::endl ;
    int num = 1000 ;
    return num ;

}
void byRef(int& x) {
    // direct use no check needed
    x = 999 ;
}


int main () {
    int a = 10 ;
    int b = 20 ;
    int c = 20 ;
    int d = 40 ;
    int e = 60 ;
    int f = 80 ;
    int g = 100 ;


    // fucntion call
    std::cout << "we can have : " << '\n' ;
    firstRef(b) ;
    byRef(a) ; 


    return 0 ;
}