#include <iostream> 
#include <string>
std::string mess_1{"programm running smothly"} ;
int x = 100 ;
int& p = x ;


int main() {
    std::cout << mess_1 << '\n';
    std::cout << p << '\n' ;

    return 0 ;
}