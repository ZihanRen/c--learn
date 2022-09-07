/*
basic I/0
 * cin:standard input system >>
 * cout:standard output stream <<
 * << insertation operator - oputput streams
 * >>extraction operator - input streams
*/


#include <iostream>
using namespace std;

int basicIO__(){
    cout << "Hello world." << endl;
    cout << "Hello" << " world" << endl;
    cout << "Hello" << "world!\n"; // endl is equivalent to \n in string
    cout << "hello\nOut\nThere\n";
    
    int num1;
    int num2;
    double num3;
    
//    cout << "Enter an integer:";
//    cin >> num1;
//    cout << "You entered:" << num1 << endl;
    
    
//    cout << "Enter a first integer";
//    cin >> num1; // you can input two numbers at the same time to the terminal wtih space
//                // those 2 numbers will be firstly saved as buffer
//    
//    cout << "Enter a second integer:";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl ;
    
    
    // or you can enter 2 numbers at the same time with space
//    cout << "Enter 2 integers separted with a space:";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;


//    cout << "Input a doucble:";
//    cin >> num3;
//    
//    cout << "You entered: " << num3 << endl;
    
//    cout << "enter an integer:";
//    cin >> num1;
//    
//    cout << "enter a double:";
//    cin >> num3;
//    
//    cout << "The integer is " << num1 << endl;
//    cout << "And the double is " << num3 << endl;
    
    int m {};
    int d {};
    int y {};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //---- WRITE YOUR CODE BELOW THIS LINE----
    cout << "Please enter your birthday following the order by month day and year:";
    cin >> m >> d >> y;
    
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- Do NOT MODIFY THE CODE BELOW THIS LINE----
    cout << m << " " << d << " " << y;
    
    return 0;
}