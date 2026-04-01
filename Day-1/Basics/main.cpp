#include <iostream> 
#include <string> 

std::string wordsOfGreating = "this is a serie of greating" ;
std::string message_0 = "Please enter a number..." ;
std::string message_1 = "The result of the addition is..." ;
int globalNumber = 100 ;
std::string globalString = "Abalo" ;

// the use of local and global variable 
void greatUser () {
    std::string great = "Hello User" ;
    std::cout << great << std::endl ;
    std::cout << wordsOfGreating << std::endl ;


}

void shoutOut () {
    std::cout << globalNumber << std::endl ;
    std::cout << globalString << std::endl ;
    
}

// integers operations

int add(int a , int b) {
    return (a + b) ;

}

int main () {
//  std::string Greating = "== Hello programmer ===" ;
//  std::cout << Greating << std::endl ;
//  calling the function 
//  std::cout << message_0 << std::endl ;
    int sum = add(12 , 15) ; 
    std::cout << sum << message_1 << std::endl ;
    shoutOut();
    
    return 0 ;
}