// variable must be declared
#include <iostream>
#include <climits>

using namespace std;

// declare global vars
int house_num {20};

int varconst__(){
    
    /****************
    Integer and char based
     * char used to store single character
     ***********
    **********************/
    
    char middle_initial{'J'};
    cout << "My initial initial is " << middle_initial << endl;
    
    unsigned short int exam_score{55};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represent{65};
    cout << countries_represent;
    
    long people_in_florida{20610000};
    cout << "There are " << people_in_florida << " in earth" << endl;
    
    long long people_on_earth{7600000000}; // use list initialization, don't use c style initialization num=20000
    cout << "There are total " << people_on_earth << " people on earth" << endl;
    
    long long distance_to_alpha{1312146545132165431};
    cout << "distance is " << distance_to_alpha << endl;
    
    /****************
    floating point type
    
    **********************/
    
    float car_payment{401.23};
    cout << "my car payment is " << car_payment << endl; 
    
    
    double pi {3.1415696565};
    cout << "PI is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is big" << endl;
    
    
    
    /****************
    boolean type type
    **********************/
    bool game_over {false};
    cout << "is GANE OVER? " << game_over;
    
    
    /****************
    overflow example
    **********************/
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "product is: " << product << " and this number is not reasonable due to overflow";
    
    return 0;
}
