// here i'm going to practice function + pointer + reference manipulation 
#include <iostream>
#include <string>
std::string message = "== PROGRAM STARTING ==" ;
std::string message_0 = "... dumb message to start program" ;
std::string message_1 = ".. second dumb message just in case" ;

// exemple simple function that takes value and return it 
int add(int a, int b) {
    int result = a + b ;
    return result ;

}

void claim (int a, int b) {
    std::cout << a + b << std::endl ;
}

int main () {
    std::cout << "working perfectly" << std::endl ;
    // calling functions under here 
    int x = add(12, 13) ;
    claim(12 , 14) ;

    return 0 ;
}