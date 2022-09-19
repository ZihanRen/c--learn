#include <iostream>
#include <string.h>
#include <memory>
using namespace std;


int main()
{
    int x=1; //an integer is 4 blocks of memory
    // assign new memory address into var name "ptr"
    int* xptr = &x; //memory address of x: &x
    cout << "The value of x is: " << x << endl;
    cout << "The memory address of x is: " << &x << endl;
    cout << "The pointer is: " << xptr << endl;
    cout << "The pointer of pointer is: " << &xptr << endl;
    cout << "Dereferencing of pointer is: " << *xptr << endl;
    
    
    // dereferencing the pointer to get the data
    // You can change the data through dereferencing the pointer
    *xptr = 10;
    cout << "\nValue of x now is: " << x << endl;
    cout << "The address of x is: " << &x << endl;
    
    
    // you can allocate memory
    char* buffer = new char [8]; //buffer to allocate 8 bytes to char. Original char only takes 1 byte
    
//    memset(buffer,0,8);
    cout << "Buffer name address is : " << &buffer << endl;
    delete [] buffer; // release memory of buffer
    
    
    // memory management
    
    cout << "\nMemory management:" << endl;
    int *iptr = new int (25);
    cout << "iptr is: " << iptr << endl; 
    cout << "dereference of iptr is: " << *iptr << endl; 
    delete iptr; //release memory
    
    // allocate array
    int *iarrayptr = new int [10]{1,2,3,4};
    cout << "\niptrarray is: " << iarrayptr << endl; 
    cout << "dereference of iarrayptr is: " << *iarrayptr << endl; 
    delete[] iarrayptr;
    
    int n[5];
    int* iarrayptr1 = n;
    cout << "\npointer of array is: " << iarrayptr1 << endl;
    cout << "pointer n[0]:" << &n[0] << endl;
    cout << "pointer n[1]:" << &n[1] << endl;
    iarrayptr1 += 1;
    cout << "Updated array pointer to first element is:" << iarrayptr1 << endl;
    
    // smart pointers
    cout << "\nWe should use smart pointers:" << endl;
    
    unique_ptr<int> p(new int{ 123 });
    // can't print p directly
    cout << *p << endl;
    cout << *p.get() << endl;
    cout << p.get() << endl;
    
    
    // pointer to pointer
    cout << "\nPointer to pointer:" << endl;
    int var1;
    int *ptr;
    int **pptr;
    var1 = 300;
    ptr = &var1;
    pptr = &ptr;
    cout << "Pointer is:" << ptr << endl;
    cout << "Pointer of pointer is:" << pptr << endl;

    




    
    
    
    

    //  Check the size of different type of pointers of different type
    // They are all the same!! Since they are all pointers except void
    // since void has no address
    cout << "\nCheck the pointer size:" << endl;
    cout << 'void:' <<  sizeof ( void* ) << "\n" 
    << "char:" <<sizeof ( char* ) << "\n" 
    << "int8:" <<sizeof ( __int8* ) << "\n" 
    << "int16:" <<sizeof ( __int16* ) << "\n" 
    << "int32:" <<sizeof ( __int32* ) << "\n" 
    << "int64:" <<sizeof ( __int64* ) << "\n"
    << "float:" <<sizeof ( float* ) << "\n" 
    << "double:" <<sizeof ( double* ) << endl;
    
    cout << "\nCheck the variable size:" << endl;
    cout << 'void:' <<  sizeof ( void ) << "\n" 
    << "char:" <<sizeof ( char ) << "\n" 
    << "int8:" <<sizeof ( __int8 ) << "\n" 
    << "int16:" <<sizeof ( __int16 ) << "\n" 
    << "int32:" <<sizeof ( __int32 ) << "\n" 
    << "int64:" <<sizeof ( __int64 ) << "\n"
    << "float:" <<sizeof ( float ) << "\n" 
    << "double:" <<sizeof ( double ) << endl;
    
    
//    int *xPtr;
//    xPtr=&x;
//    *xPtr = 9;
//    cout << "The value of x: "<< x << endl;
//    cout << "Address x: "<< &x << endl;
//    cout << "Value of xPtr: "<< xPtr << endl;
//    cout << "Value of dereferenced *xPtr: "<< *xPtr;
    
    
    
    
}