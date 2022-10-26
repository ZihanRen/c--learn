#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<char>> &arr){
    
    for (size_t row_i{0};row_i<arr.size();row_i++){
        cout << endl;
        for (size_t col_i{0};col_i<arr[row_i].size();col_i++){
            std::cout << arr.at(row_i).at(col_i);
        }
    }
    cout << endl;
}

void donut (int donut_s,vector<vector<char>> &arr){
    for (int i{donut_s};i<donut_s*2;i++){
        for (int j{donut_s};j<donut_s*2;j++){
            arr[i][j] = ' ';
        }
    }
}

int main(){
    int input_n {};
    cout << "Welcome! Please enter the size of your donuts as n: ";
    cin >> input_n;
    cout << endl;
    int size_mat {input_n*3};
    // initialize the vector
    vector<vector<char>> mat(size_mat,vector<char>(size_mat,'D'));
    // print out the initialized vector
    donut(input_n,mat);
    cout << "*****************************Donut image**********************************" << endl;
    print(mat);
    
}