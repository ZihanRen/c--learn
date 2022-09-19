#include <iostream>
#include <array>
#include <memory>
int main()
{ 
 int* z1 = new int ( 0 );
 int* z2 = 0; 
 std::cout << z1 << ", " << &z1 << ", " << *z1 << std::endl; // z1 is a pointer of 0; &z1 is the pointer of pointer of 0. *z1 is dereference of pointer
 std::cout << z2 << ", " << &z2 << ", " << *z2 << std::endl; // z2 is an integer and not a pointer, thus there will be no dereference
} 