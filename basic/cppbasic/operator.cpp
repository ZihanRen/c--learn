#include <iostream>
#include <array>
using namespace std;

int Operator(){
    
    // operation follow certain dtypes
    int x {100};
    int y1 {11};
    double y2 {11};
    
    double z1 {x/y1};
    double z2 {x/y2};
    
    cout << z1 << "," << z2 << endl;
    
    // bitwise
    int A {0b00001010};
    int B {0b00000111};
    
    cout << "A&B: " << (A&B) << endl;
    
    array<int,5> modern_array = {1,2};
    
    cout << modern_array[3] << endl;
    cout << modern_array[3] << endl;
    
    array<array<int,3>,2> modern_mat = {{{1,2,3},{4,5,6}}};
        
    cout << modern_mat[0][1] << endl;
    
    
    
    
    
    
}