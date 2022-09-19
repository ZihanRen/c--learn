#include <iostream>
using namespace std;

int test_equal(){
    
    // same logic for char and other values
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1 {}, num2{};
    
    cout << "Enter 2 integers separated by space:";
    cin >> num1 >> num2;
    equal_result = (num1==num2);
    not_equal_result = (num1!=num2);
    
    // only display 0 (false) 1 (true)
    cout << "Comparison result equals:" << equal_result << endl;
    cout << "Comparison result not equals: " << not_equal_result << endl;
    
    // convert 0/1 into false/true
    cout << boolalpha;
    cout << "\nComparison result equals:" << equal_result << endl;
    cout << "Comparison result not equals: " << not_equal_result << endl;
    
}

