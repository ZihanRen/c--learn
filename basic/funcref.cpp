// function pass by reference
// you can use void to swap the number
#include <iostream>
#include <string>
#include <vector>

//static global variable
int num {-999};

void global_display();
void pass_by_ref1(int &num);
void pass_by_ref2(std::string &s);
void pass_by_ref3(std::vector<std::string> &v);
void print_vector(const std::vector<std::string> &v); //const
void static_local_example();


unsigned long long factorial(unsigned long long n){
    if (n==0)
        return 1;
    return n*factorial(n-1);
}

unsigned long long fibonacci (unsigned long long n){
    if (n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}

void global_display(){
    // this function will update global variable
    std::cout << "\nGlobal variable is: " << num << std::endl;
    num *= 2;
    std::cout<< "Gloabl variable is: " << num << std::endl;
    std::cout << std::endl;
}

void static_local_example(){
    // this function will initialize the global variable inside the function
    // the change only attached to this function
    static int num {5000};
    std::cout << "\nLocal static variable is: " << num << std::endl;
    num *= 2;
    std::cout<< "Local static variable changes to: " << num << std::endl;
    std::cout << std::endl;
}

void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(std::string &s){
    s = "Changed";
}

void pass_by_ref3(std::vector<std::string> &v){
    v.clear(); //delete all vector elements
}

void print_vector(const std::vector<std::string> &v){
    for (auto s:v)
        std::cout << s << " ";
    std::cout << std::endl;
}

int test_main_funcref(){
    int num{10};
    const int another_num {20};
    
    // run recursive function
    auto c {0};
    std::cout << "Factorial result is: " << factorial(3) << std::endl;  

    // run fibonacci
    int input_num {20};
    std::cout << "The fibonacci input is: " << input_num << " with result is: " << fibonacci(input_num) << std::endl;
    
    // new block of statement
    {
        int num {200};
        std::cout << "Local num is: " << num << std::endl;
        std::cout << "Outside scope num is: " << another_num << std::endl;
    }
    
    global_display();
    global_display();
    
    static_local_example();
    static_local_example();
    
    global_display();
    global_display();
    
    std::cout << "Num before pass_ref_1 " << num << std::endl;
    pass_by_ref1(num);
    std::cout << "Number after pass_by_ref1 " << num << std::endl;
    
    // const num cannot be swapped
    std::cout << "Num before pass_ref_1 " << another_num << std::endl;
    pass_by_ref1(num);
    std::cout << "Number after pass_by_ref1 " << another_num << std::endl;
    
    // test on vector
    std::vector<std::string> stooges{"Larry","Moe","Curly"};
    std::cout << "\nname before calling ref3:";
    print_vector(stooges);
    pass_by_ref3(stooges);
    std::cout << "After ref3 vector becomes:";
    print_vector(stooges);
    std::cout << std::endl;
    
}