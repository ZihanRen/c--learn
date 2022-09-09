#include <iostream>
#include <vector>
using namespace std;

int Vector(){
    
    vector <int> vector1;
    vector <int> vector2;
    
    // add 10 and 20 to vector1 dynamically use push back
    vector1.push_back(10);
    vector1.push_back(20);
    
    // Display the elements in vector1 using the at method 
    cout << "\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << "elements" << endl;
    
    // add elements to vector2
    vector2.push_back(100);
    vector2.push_back(200);
    
    //define vector2d
    
    vector <vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    //Display 2d vec
    cout << "Display 2d vector: " << endl;
    cout << vector2d.at(0).at(0) << "  " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << "  " << vector2d.at(1).at(1) << endl;
    
    // try to modify one element of vector
    vector2d.at(0).at(0) = 4500;
    cout << vector2d.at(0).at(0) << "  " << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << "  " << vector2d.at(1).at(1) << endl;
    
    
    
    


    
}
