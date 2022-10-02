#include <iostream>
#include <string.h>
#include <memory>
using namespace std;


int test_pointer_basic()
{
    int x=1; //an integer is 4 blocks of memory
    // assign new memory address into var name "ptr"
    int* xptr = &x; //memory address of x: &x assign pointer
    cout << "The value of x is: " << x << endl;
    cout << "The memory address of x is: " << &x << endl;
    cout << "The pointer is: " << xptr << endl;
    cout << "The pointer of pointer is: " << &xptr << endl;
    cout << "Dereferencing of pointer is: " << *xptr << endl;
    x = 2;
    cout << "The pointer is still " << xptr << endl;
    cout << "Dereferencing of pointer should be changed to " << *xptr << endl;

    
    // initialize pointer
    int *p; // garbage can be any location
    cout << "\nvalue of p is: " << p << endl; //garbage 
    cout << "Address of p is: " << &p << endl;
    cout << "The size of p is " << sizeof(p) << endl;
    p = nullptr; // pointer to nowhere
    cout << "\nValue of p is:" << p << endl;
    
    // understand more on pointer
    int score{10};
    int *score_ptr {nullptr};
    score_ptr = &score; //pointer to score 10
    cout << "Value of score is " << score << endl;
    cout << "Addresss of score is " << &score << endl;
    cout << "Value of score pointer is " << score_ptr << endl;
    
    // score_ptr = &p //the compiler will have an error
    
    // memory allocation example
    int *int_ptr_ptr {nullptr}; //initialize the pointer
    int_ptr_ptr = new int; //allocate an integer on the heap
    cout << int_ptr_ptr << endl;
    cout << *int_ptr_ptr << endl; //garbage pure integer not assigned
    *int_ptr_ptr = 100; //assign 100 to the integer
    cout << *int_ptr_ptr << endl;
    delete int_ptr_ptr; //delete the pointer;free the memory
    
    // virus: memory leak ********** dangerous **************
//    while (true)
//        temp_ptr = new double[size]
    
    // memory allocation for array
    int *array_ptr {nullptr};
    int size{};
    
    cout << "\nHow big you want the array?:";
    cin >> size;
    array_ptr = new int[size]; //allocate array on the heap
    delete [] array_ptr; // release memory
    
    
    // pointer and array
    // int array_name[] {1,2,3,43,5};
    // int *pointer_name {array_name};
    int test1[] {100,95,89};
    cout<<"\n\nBeginning the array pointer!!" << endl;
    cout << "values of score is: " << test1 << endl; // the name of array is the first address of array element
        
    int *test_ptr{test1}; //test1 is already the address
    cout << "Values of pointer of score :" <<test_ptr << endl;
    
    //pointer subscript notation
    cout << "\narray values notation:" << endl;

    for (int i;i<=2;++i){
        cout << test1[i] << endl;
    }
    
    cout << "\npointer values notation:" << endl;
    for (int i;i<=2;++i){
        cout << test_ptr[i] << endl; //there should be no array for the pointer;
    }
    
    cout << "\nPrinter offset notation:" << endl;
    for (int i;i<=2;++i){
        cout << *(test_ptr+i) << endl;
    }
    
    // pointer arithmetic
    int scores1 []{100,95,-1};
    int *score1_ptr (scores1);
    cout << "\nPointer arithmetic\n";
    
    while (*score1_ptr != -1){
        // Dererencing the pointer - print out
        cout << *score1_ptr << endl;
        score1_ptr ++;
    }
    
    // a more common way
    cout << "\nA more common way to do pointer arithmetic:" << endl;
    // you need to reset your pointer address
    score1_ptr = scores1; //initialize the pointer to the first element address of array
    while (*score1_ptr != -1)
        cout << * score1_ptr++ << endl; //++ first score1_ptr += 1, then dereferencing
    cout << endl;
    
    // pointer extraction
    cout << "\NStudy pointer extraction" << endl;
    char s_test {'a'};
    cout << "The size of one character is: " << sizeof(s_test) << endl;
    //initialize the array with all characters
    char name1[] {"Frank"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    char_ptr1 = &name1[0];
    char_ptr2 = &name1[3];
    cout << "Substraction of first character and fourth character is: " << char_ptr2-char_ptr1 << endl;
    
    // pointer to constant
    int const_1{100};
    int const_2{200};
    const int pointer_to_const {&const_1};
    // *score_ptr = 23; // error the pointer to const, which cannot be changed
    // score_ptr = &low_score //ok
    
    int *const const_ptr {&const1}
    //*const_ptr = 86 //ok
    //score_ptr = &const_2 //error : the pointer cannot be changed
    
    //obviously more strict format would be
    const int *const const_ptr_to_const {&high_score};
    
    
    
    
    
    
    
    
    
}