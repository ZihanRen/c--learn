#include <iostream>
using namespace std;

int main(){
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << endl;
    cin >> num;
    
    if (num>= min)
        cout << num << " Greater than " << min << endl;
    
    // wrap if in a block for multiple lines
    if (num>=min){
        cout << "\n ======= if statement 1 ========" << endl;
        
        int diff {num-min};
        cout << "num-min = " << diff << endl;
    }
    
    if (num<=max){
        cout << "\n ======= if statement 2 ========" << endl;
        
        int diff {num-max};
        cout << "num-max = " << diff << endl;
    }
    
    if (num>=min&&num<=max){
        cout << "\n=======if Statement 3========" << endl;
        cout << "All if statements should be satisfied" << endl;
        }
        
    if (num==min||num==max){
        cout << "\n======if statement 4======" << endl;
        cout << "num on boundary" << endl;
    }
    

    // if else statement
    int num_int {10};
    int target_num {10};
    if (num_int != target_num){
        cout << "\nNot equal" << endl;
    }
    else {
        cout << "They are equal" << endl;
        }
        
    
    // nested if

}