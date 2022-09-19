#include <iostream>
#include <array>
#include <memory>

using namespace std;

int test_p2q4()
{ 
     int x = 'x'; 
     cout << x << endl; //wrong casting
     
     int* y = &x;
     cout << y << endl; // pointer of x
     
     int*& ref = y;
     *ref = 1;
     cout << ref << endl;
     ref = 0; // reassign pointer to an integer. Pointer is nothing but a variable
     cout << ref << endl; //
} 
