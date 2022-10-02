#include <iostream>
using namespace std;

int if_test_conditon(){
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
    int score {};
    cout << "Enter your score on the exam (0-100):";
    cin >> score;
    char letter_grade {};
    
    if (score>=0 && score<=100){
        cout << "Grade in range" << endl;
        if (score>=90)
            letter_grade = 'A';
        else if (score>=80)
            letter_grade='B';
        else 
            letter_grade = 'F';
        cout << "Your grade is: " << letter_grade << endl;
        
        if (letter_grade=='F')
            cout << "Sorry the score is not in the range" << endl;
        else
            cout << "Congrats for passing the exam" << endl;
    }
    
    else{
        cout << "Sorry the grade is not in the range" << endl;
        
    }
    
    // switch case
    char letter_grade_test {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin>>letter_grade_test;
    
    switch(letter_grade_test){
        case 'a':
        case 'A':
            cout << "You are above 90" << endl;
            break;
        case 'b':
        case 'B':
            cout<<"You need 80-89" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure? (N/Y)" << endl;
            cin >> confirm;
            if (confirm=='y'||confirm=='N')
                cout << "OK you didn't study" << endl;
            else if (confirm=='n'||confirm=='N')
                cout << "OK you like studying" << endl;
            else
                cout<< "Invalid input" << endl;
            break;
            }
        default:
            cout<< "You are too low" << endl;
    }
    
    
    
    // conditional operator
    int input_num11 {};
    cout << "Enter an integer:" << endl;
    cin >> input_num11;
    cout << input_num11 << "is " << ( (num%2==0)? "even":"odd" ) << endl; 
    
    
    
}