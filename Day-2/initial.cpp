#include <iostream> 
#include <string>

std::string message{"this is a report of the program working"} ;

// function to prove the principles 
// pass by copy 
void setToAHandred(int a) {
    a = 100 ;

}

// pass by reference 
void doubleIt(int& x) {
    x = x * 2 ;
    // std::cout << x ;

}

// pass by address

void substractIt(int* p) {
    int minus = 1000 ;
    if(p != nullptr) {
        *p = *p - minus ;
    }

}

int main () {
    // init x
    int x;
    int num{50} ;

    // Program output 
    // std::cout << message << '\n' ;
    // std::cout << x << '\n' ; 
    // the result of x is 32758 is returned as the computer assign some unused memory 
    // its will then send the value residing in that location to std::cout 
    // which will print thw value interpreted as integer
    // setToAHandred(num) ;
    // doubleIt(num) ;
    substractIt(&num);
    std::cout << num << '\n' ;
    return 0 ;
}