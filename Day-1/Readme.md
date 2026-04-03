# C++ Basics + functions & scope + pointer and reference 
# C++ Basics
- Variable Management : learning the difference between variable assignement and variale initialization 
- Input & output : getting confortable with iostream library std::cout std::cin std::endl ;
- Syntax rules : understand keywords , the rules of naming identifiers and the proper way to use whitespace and formating 
- Logic building blocks : Mastering literals , operators and expression which form the basics of all programm logic 

# C++ Function && scope
 Function allow to organize code into reusable blocks , while scope determines where those blocs and theirs data can be accessed 
- Function mechanics : how to define and return value , and the distinction between parameters and arguments
- Variable visibility : understand local scope , global variable , namespaces and avoid name coalision 
- Project organization : How to use the forward declaration , manage program with multiple sources files , use header filers and header guard 
- Advanced scope : the concept of internal and external linkage , variable shadowing and static local variable 

# C++ Pointer && reference 
These compond type are essential for memory efficiency management and advanced data handling 
- References : understand Ivalue reference and how to pass by reference (especially const) to allow function to access ddatata without making expensive copie 
- Pointers : Mastery the basics of pointers , including null pointers for safety and technique of passing by address 
- Memory Categories :  Distinguish vbetween Ivalue and Rvalue which is critical for understanding c++ handling temporary and persistent 
- Modern practice : use for value that might not exist and understanding how to type deduction works with pointers and reference std::optional 
============================================================================================================================================
=== Personal Notes ===
- always start assign value like this a{value} or a = {value} 
- void : does something but no return needed 
- int return result and can be captured with return 
- creating variable there are tow type :
  Brace init =>
  int x {} brace  
  std::string message{"the actual message"} 
  Copy init =>
  int num = 100 ;
  std::string message = "the actual message"
  ==> both work but its safer to use the brace init 


