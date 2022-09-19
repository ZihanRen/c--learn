#include <iostream>
using namespace std;

int test_mixed_expression(){
    int total_amount {100};
    int total_number {8};
    
    double average {0.0};
    
    average = total_amount / total_number;
    cout << average << endl; //display original calculation
    
    // define explicit type casting - static cast -->convert to double
    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl; //display original calculation

}