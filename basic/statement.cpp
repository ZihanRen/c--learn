/*
Increment operator ++
 * Decreament operator --
 * Prefix ++num
 * Postfix num++
*/
#include <iostream>
using namespace std;

int main(){
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
    
    cout << "Counter1:" << counter1 << endl;
    result = ++ counter1;
    cout << "Counter1: " << counter1 << endl;
    cout << "Result: " << result << endl;
    
    // post-increment
    int counter2 {10};
    int result2 {0};
    
    cout << "Counter2:" << counter2 << endl;
    result2 = counter2++; //post increment
    cout << "Counter2:" << counter2 << endl;
    cout << "Result: " << result2 << endl;
    
    // more complex
    int counter3{10};
    int result3{0};
    
    cout << "Counter:" << counter3 << endl;
    result3 = ++ counter3 + 10; //note the pre-incremnet
    cout << "Counter:" << counter3 << endl;
    cout << "Result: " << result3 << endl;
    
    // more complex
    int counter4{10};
    int result4{0};
    
    cout << "Counter:" << counter4 << endl;
    result4 = counter4++ + 10; //note the pre-incremnet
    cout << "Counter:" << counter4 << endl;
    cout << "Result: " << result4 << endl;
    
    
    

    
}
