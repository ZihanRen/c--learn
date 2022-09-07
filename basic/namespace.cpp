#include <iostream>

using namespace std;  //use the entire std

int namespace11()
{
    int user_num; // define integer of your input
    cout << "Please enter your favoriate number between 1 and 100:";
    cin >> user_num;
    cout << "great that's my favoriate number" << std::endl;
    cout << "Not really!!" << user_num << " is my favoriate number" << std::endl;
    return 0;
}