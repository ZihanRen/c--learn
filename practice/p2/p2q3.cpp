#include <iostream>
#include <array>
#include <memory>

using namespace std;

int test_p2q3()
{ 
     std::array<int, 3> arr = { 10,20,30 };

     std::array<int, 3>& ref1 = arr;
     int& ref2 = arr[0]; 
     cout << ref1[0] << endl;
     ref1[1] = ref2;
     
     ref2++;
     ref2 = arr[2]; 

     ref2++; //31

     
     cout << arr[0] << endl; // ref2 is 31 in the end. ref2 = arr[2], ref2++
     cout << arr[1] << endl; // ref1[1] = ref2, ref2 was 10
     cout << arr[2] << endl; // 30 was never changed. No replacement

} 