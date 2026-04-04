# C++ Function + pointer + reference + class + object 
# C++ initialization 
- Initialized = The object is given a known value at the point of definition.
- Assignment = The object is given a known value beyond the point of definition.
- Uninitialized = The object has not been given a known value yet.
# C++ Fondation : 
# Value Categorie
- Lvalue are expressions that refere to persistent object that have specific adress memory , they live beyond the current expression 
- Rvalue these are temporary values that do not have persistent memry 
# References 
-- How they works ?
you can create Lvalue reference to const which allow to read the value but not modify it , this the most efficient method to pass large object to function without making a copy 
-- Requirement 
a reference must be initialized when created and can not be reseated 
# Pointers
-- How they works ?
unlike the reference whitch is the alias , a pointer hold the location of an object , To access the value at that address you must deference the pointer
-- Nullptr = Null pointer :
a pointer can be a null pointer meaning its does not point to any valid address its usefull when presnting a no value or no found 
-- Flexibility 
pointers can be changed to point to different address at any time and do not necessarilly have to be initialized immediatly , it safer to initialize nullptr 
# Making proper use of them 
to use these tool efficiently first must understand 
- Pass by address Vs pass By reference :
both allow a function to access an object without copying it . 
pass by reference is usualy prefereed because its is safer and cleaner  syntax
pass by address is used when you need to be able to pass "nothing" or working with c style array 
- Return by reference 
functions can return a reference to an object to avoid a copy but never return a reference to a local variale that will be destroyed when the function end 
- Modern alternative 
for situation where value might not exist , c++ often uses std::optional instead of pointers
for memory management smart pointer like std::unique_ptr and std::shared_ptr are prefered over raw pointer to help prevent memory leak 

### Reminder ### 
- Pass by value useless cant modify value 
- Pass by reference => int& p -> p is a nickname for some existing int
- Pass by address => int* p -> p is a variable that holds an address