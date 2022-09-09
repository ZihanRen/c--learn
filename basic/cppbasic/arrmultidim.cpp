/*
Multi-dimensional arr, vector
 * Arr is fixed and not flexible
 * Need dynamic array such as vector
 * vector is a container
 * all same type elements
 * continuos memory
 * dynamic size
 * 
 * intilized to 0
*/

#include<iostream>
#include <vector>
using namespace std;

int arrm(){
    
    vector <char> vowels (5);
    vector <int> vowelsss (10);
    vector <double> high_temperature (365.21,25.3);
    
    cout << "first element of vowels is " << vowels[0] << endl;
    cout << "last element of temp is " << high_temperature.back() << endl;
    
    // dynamic add values to array
    vector <int> test_scores {100,200,300}; //size of 3
    test_scores.push_back(90);
    cout << "last elemetn of test scores is " << test_scores[3] << endl;
    
    cout << "There are total size of test scores: " << test_scores.size() << " in the vector" << endl;
    
    // dynamic update test score
    cout << "\nEnter a test score to add to the vector:";
    
    // just initialize an integer
    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    cout << "\nTest scores are now: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are total size of test scores: " << test_scores.size() << " in the vector" << endl;
    
    
    // 2D vectors
    
    vector <vector<int>> movie_ratings
    {
       {1,3,4,5},
       {1,2,3,4},
       {1,3,4,5}  
    };
    
    cout << "\nthe first row is " << movie_ratings[0][0] << endl;
    
}