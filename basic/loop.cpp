#include <iostream>
#include <vector>
using namespace std;

int test_loop(){
    for (int i{1}; i<=10;i+=2)
        cout << i << endl;
    cout << endl;
    for (int i{10};i>0;--i)
        cout << i << endl;
    
    cout << endl;
    for (int i{1},j(5);i<=5;++i,++j)
        cout << i << "+" << j << "=" << i+j << endl;
    
    vector<int> nums{10,20,30,40,50};
    
    for (unsigned i{0};i<nums.size();++i)
        cout << nums[i] << endl;
    
    cout << endl;
   
   // write code that uses a for loop to calculate the sum of the odd integers from 1 to 15
    int sum_sum_sum {0};
    for (int i{1};i<=15;++i)
        if (i%2!=0)
            sum_sum_sum+=i;
    cout << "All odd number add up is: " << sum_sum_sum << endl;
    
   // range based loop 
    cout << endl;
    int scores [] {100,90,97};
    for (auto score:scores)
        cout << score << endl;
    
    // loop around a string
    for (auto c: "Frank")
        cout << c << endl;
    
    // while loop 
    bool done {false};
    int number {0};
    
    while (!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if (number<=1 || number>=5)
            cout << "Out of range, try again" << endl;
        else{
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    // Given a vector of integers, determine how many integers 
    // are present before you see the value -99 .  

    const vector<int> ref_vec {100,-20,300-989,-99};
    int count {0};
    size_t index {0};
    
    while (index<ref_vec.size() && (ref_vec.at(index) != -99)){
        ++count;
        ++index;
    }
    cout << "The total count before -99 is: " << count << endl;
    
    // do while loop
    char selection {};
    do {
        double width {}, height{};
        cout << "Enter width and height separate by space: ";
        cin >> width >> height;
        
        double area {width*height};
        cout << "Area is: " << area << endl;
        
        cout << "Calculate another? (Y/N): ";
        cin >> selection;
    } while (selection=='Y');
    cout << "Thanks" << endl;
    
    // continue break statement
    vector <int> valuess {1,2,3,4,-1,-1,-99,7};
    for (auto vall:valuess)
        if (vall == -1)
            continue;
        else if (vall==-99)
            break;
        else
            cout << vall << endl;
            
    // nest for loop
    int grid[5][3] {};
    for (int row{0}; row<5;++row){
        for (int col {0}; col<3; ++col){
            grid[row][col] = 1000;
        }
    }
    
    
}