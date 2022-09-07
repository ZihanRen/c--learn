/*Question 3 (20 points): Write a program in C++ to compute quotient and 
remainder where the dividend and the divisor are a whole number and
given by user inputs. Print out the result.
Notes:-
• Use an appropriate datatype.
• You must use only iostream library.
*/
#include <iostream>
using namespace std;

int main(){
    int dividend {};
    int divisor {};
    cout << "Please input divisor:";
    cin >> divisor;
    cout << "\nPlease input dividend:";
    cin >> dividend;
    
    double quotient {dividend/divisor};
    double remainder {dividend%divisor};
    
    cout << "Qutient is: " << quotient << endl;
    cout << "Remainder is: " << remainder << endl;
    
    return 0;
}