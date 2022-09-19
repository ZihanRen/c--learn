#include <iostream>
#include <array>
#include <memory>

/*
  *ptr1: dereferencing of pointer of a[0]
  *ptr2: same, dereferencing of pointer of a[0], because the default a is a[0]
  *( ptr3 - 1 ): ptr3: 0008 - 1 ==0004. 0000-->[1], 0003-->[2]
 * */


int test_p2q2()
{ 
     std::array<int, 3> a = { 10,20,30 };
     int* ptr1 = &a[0]; 
     int* ptr2 = ( int* ) &a;
     int* ptr3 = ( int* ) ( &a + 1 );
     std::cout << *ptr1 << ", " << *ptr2 << ", " << *( ptr3 - 1 ) << std::endl;
} 