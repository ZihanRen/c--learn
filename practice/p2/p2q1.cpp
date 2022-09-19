#include <iostream>
#include <array>
#include <memory>

using namespace std;

int testp2q1()
{ 
     int ( *var0 )[3]; int a0[3] = { 10,20,30 }; var0 = &a0;
     
     int* var1 = new int[3]; *var1 = 10; var1[1] = 20; *( var1 + 2 ) = 30;
     
     int* var2[3] = { new int ( 10 ), new int ( 20 ), new int ( 30 ) };
     
     std::unique_ptr<std::array<int, 3>> var3 ( new std::array<int, 3>{10, 20, 30} );
     
     std::array<std::unique_ptr<int>, 3> var4 = { std::make_unique<int> ( 10 ), 
     std::make_unique < int> ( 20 ), std::make_unique < int> ( 30 ) };
     
     
     // explaining variables from print out:
     // a0 is an array
     // var0 is a0's pointer, array
     cout << a0 << endl;
     cout << "The last pointer of a0 is: " << &a0[2] << endl;
     cout << "The pointer of a0 is:" << var0[2] << endl;
     
     // var1 is uninitialized pointer
     cout << "\nDereference of var1 is:" << *var1 << endl;
     cout << "2nd element of var1 is:" << var1[1] << endl;
     cout << "1st element of var1 is:" << var1[0] << endl;
     cout << "3rd element of var1 is:" << var1[2] << endl;
     
     // var2 is pointer array to store address of array [10,20,30]
     cout << "\nDereference of var2 first element is:" << *var2[0] << endl;
     cout << "2nd element of var2 is:" << var2[1] << endl;
     cout << "1st element of var2 is:" << var2[0] << endl;
     cout << "3rd element of var2 is:" << var2[2] << endl;
     
     // var3 is smart pointer array to store address of array [10,20,30]
     cout << "\nDereference of var2 first element is:" << var3.get() << endl;

     // var3 is smart pointer array to store address of array [10,20,30]
     cout << "\nDereference of var2 first element is:" << var3.get() << endl;
     
     // var4 is simply an array not an smart pointer object. But the elements of var4 are smart pointers
     cout << "\nPointer of var4 first element is:" << &var4[0] << endl;
     cout << "2nd element of var4 is:" << var4[1].get() << endl;
     cout << "1st element of var4 is:" << var4[0].get() << endl;
     cout << "3rd element of var4 is:" << var4[2].get() << endl;
}