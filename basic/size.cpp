#include <iostream>
// make sure include climits for integer types
// similar info for floating point numbers <cfloat>
#include <climits> 

using namespace std;

int test_size() {
    cout << "sizeof information of int -----------------------------------" << endl;
    
    cout << "char:" << sizeof(char) << " bytes\n";
    cout << "int:" << sizeof(int) << " bytes\n";
    cout << "unassigned int:" << sizeof(unsigned int) << " bytes\n";
    cout << "short:" << sizeof(short) << " bytes\n";
    cout << "long:" << sizeof(long) << " bytes\n";
    cout << "long long:" << sizeof(long long) << " bytes\n";

    cout << "sizeof information of int -----------------------------------" << endl;
     
    cout << "float: " << sizeof(float) << "bytes." << endl;
    cout << "double: " << sizeof(double) << "bytes." << endl;
    cout << "long double: " << sizeof(long double) << "bytes." << endl;
    
    // use values defined in climits
    cout << "-----------------------------------------------" << endl;
    cout << "Minimum values:" << endl;
    cout << "char" << CHAR_MIN << endl;


    cout << "Maximum values:" << endl;
    cout << "char:" << CHAR_MAX << endl;
    
    //check variable size
    cout << "---------------------variable size-------------------------" << endl;
    int age{200};
    cout << "size of age is " << sizeof(age) << endl;
    
    // declare constant
    // constant cannot change once declared
    cout << "---------------------Constant cannot change-------------------"<<endl;
    
    // define a problem $30 per room plus approximately 6% tax, valid for 30 days
    const int price_room {30};
    const double tax_rate {0.06};
    const int valid_days{30};
    
    int room_num{2};
    cout << "How many rooms would you like to clean?: " << endl;
    cin >> room_num;
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of rooms:" << room_num << endl;
    cout << "Price per room is $" << price_room << endl;
    cout << "Cost $" << room_num*price_room << endl;
    cout << "Tax is " << room_num*price_room*tax_rate << endl;
    
    cout << "Total estimate is " << price_room*room_num+price_room*room_num*tax_rate << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;
    
    
    
    
    

    
    
    
    
    
    
    
}