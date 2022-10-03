#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printout(vector<string> arr){
    for (auto str:arr)
        cout << str << endl;
}

int test_main_ref(){
    
    int num{100};
    int &ref{num};
    
    cout << "\n---------------------end-----" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n---------------------end-----" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n---------------------end-----" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------------end-----" << endl;
    
    vector<string> str_collect{"Hello","World"};
    printout(str_collect);
    // change the vector in place
    for (auto &str:str_collect)
        str="Pointer";
    printout(str_collect);
    
    // L values
    cout << "\n---------------------end-----" << endl;
    int x {100};
    int &ref1 = x;
    cout << ref1 << endl;
    ref1 = 1000;
    cout << ref1 << endl;
    //this is not okay:
    //int &ref2 = 100
    
}