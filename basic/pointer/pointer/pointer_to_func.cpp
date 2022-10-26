#include <iostream>
using namespace std;

//function return a pointer
int *create_array(size_t size,int init_value=0){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0};i<size;++i)
        *(new_storage+i) = init_value;
    return new_storage;
}

void display_2nd(const int*const array,size_t size){
    for (size_t i{0};i<size;i++)
        // pointer subscript notation
        cout << array[i] << " ";
    cout << endl;
}

void display (int *array,int sentinel){
    while (*array!=sentinel)
        //array is address of first element
        cout << *array++ << " ";
    cout << endl;
}

int test_main_pointertofunc(){
    cout << "\n------------------------------" << endl;
    int scores []{100,200,23,-1};
    display(scores,-1);
    cout << endl;
    
    cout << "\n------------------------------" << endl;
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    cout << "\nHow many integers would you like to allocate?";
    cin>>size;
    cout << "What would you like them initialized to?";
    cin>>init_value;
    
    my_array = create_array(size,init_value);
    cout << "The first element of my array is: " << my_array[0] << endl;
    cout << "\n------------------------------" << endl;
    display_2nd(my_array,size);
    delete [] my_array;
    
    
    
    return 0;
}