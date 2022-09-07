/*
array and vector
 * vector is more convenient to use
 * array is a collection of vars
 * compound data type: arr. all elements must be the same 
 * data type. Array stored contiguously in memory
*/

#include <iostream>
using namespace std;

int arrbasic(){
    // initialize an array with all 0
    int c[10]{};
    cout << "The first element of c is " << c[0] << endl;
    cout << "The last element of c is " << c[-1] << endl;

    
    
    
    char vowels[] {'a','b','c','d','e'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is" << vowels[4] << endl;
    
    cout << "Please change the last element of array to:" << endl;
    
    char replace {'N'};
    cin >> replace;
    vowels[-1] = replace;
    
    cout << "Now last element of array changes to " << vowels[-1] << endl;
    
    
    
    // initialization only works on first array element
    // e.g. 
//    int test_scores[5]{100,90}; // 100 90 is for initialization
//    int test_scores[5]{100,90}; // 100 90 is for initialization
//    cout << "First score is " << test_scores[0] << endl;
//    cout << "Second is: " << test_scores[1] << endl;
//    cout << "thrid is: " << test_scores[2] << endl;


    int test_scores[5]{50,60}; // 100 90 is for initialization
    
    // change elements of arrays from users input
    cin>> test_scores[0] >> test_scores[1] >> test_scores[2] >> test_scores[3];
    
    cout << "First score is " << test_scores[0] << endl;
    cout << "Second is: " << test_scores[1] << endl;
    cout << "thrid is: " << test_scores[2] << endl;
    
    cout << "The name of array is " << test_scores << endl;
}
