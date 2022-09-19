#include <iostream>
using namespace std;

int test_logic_operator(){
    int num{};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    // determine if input integer is in the middle of two integers
    cout << "Enter an integer - the bounds are " << lower << "and " << upper << endl;
    cin >> num;
    
    bool within_bound {false};
    within_bound = (num>lower && num<upper);
    cout << "Inside the range or not? " << within_bound << endl;
    
    // compound asssing operator
    int x {3};
    int y {4};
    cout << "\nThe operation result is: " << (x + x*y <= y) <<endl;
    
    
}