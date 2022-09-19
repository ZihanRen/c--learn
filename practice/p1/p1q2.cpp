/*
 * Write a program in C++ to receive two inputs of 
a character datatype and store those inputs into two different variables. 
Then, swap the value of the two variables. Print out the result.
Notes:
• Use an appropriate datatype.
• You must use only iostream library.
*/

#include <iostream>
using namespace std;
int q2(){
    // initialize two characters
    char var1 {};
    char var2 {};
    
    // user input two characters
    cout << "Please input two variables:";
    cin >> var1 >> var2 ;
    
    cout << "Value of var1 is: " << var1 << endl;
    cout << " Value of var2 is: " << var2 << endl;
    
    // swap two characters
    swap(var1,var2);
    
    cout << "Value of var1 after swap is: " << var1 << endl;
    cout << " Value of var2 after swap is: " << var2 << endl;
    return 0;
}