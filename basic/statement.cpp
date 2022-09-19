/*
Increment operator ++
 * Decreament operator --
 * Prefix ++num
 * Postfix num++
*/
#include <iostream>
using namespace std;

int test_statement(){
    int counter {10};
    int result {0};
    
    // simple increment
    counter++;
    cout << "Counter:" << counter << endl;
    
    ++ counter;
    cout << "Counter:" << counter << endl;
    
    // preincrement
    int counter1 { 10 };
    int result1 { 0 };
    
    result = ++ counter1;
    cout << "Counter1: " << counter1 << endl;
    cout << "Result1: " << result << endl;
    
    // post-increment
    int counter2 {10};
    int result2 {0};
    
    result2 = counter2++; //post increment --> change on counter2
    cout << "Counter2:" << counter2 << endl;
    cout << "Result2: " << result2 << endl;
    
    // more complex
    int counter3{10};
    int result3{0};
    
    result3 = ++ counter3 + 10; //note the pre-incremnet
    cout << "Counter3:" << counter3 << endl;
    cout << "Result3: " << result3 << endl;
    
    // more complex
    int counter4{10};
    int result4{0};
    
    result4 = counter4++ + 10; //note the pre-incremnet
    cout << "Counter4:" << counter4 << endl;
    cout << "Result4: " << result4 << endl;
    
}
