#include <iostream>
#include <ctime>
using namespace std;

// func prototype
double cal_area_circle(double raidus);
// set up height to be default value
double cal_volume(double raidus, double height = 20);
// void do not return
void area_circle();
void volume_circle(double radius);
// overloading function
void print(int num);
void print(char character);
// pass array to function, you should also include size of array
void print_arr (int arr[],size_t size);
void set_array(int arr[],size_t size, int value);
// you can set up array to constant to make sure the array is only readable
void print_array(int arr[], size_t size){
    for (size_t i{0};i<size;++i)
        cout << arr[i] << " ";
    cout << endl;
}

void set_array(int arr[], size_t size, int value){
    for (size_t i{0};i<size;++i)
        arr[i] = value;
}



const double pi {3.14125};

int test_main(){
    area_circle();
    volume_circle(2.5);
    print('s');
    print('a');
    
    // print array
    int my_scores[] {100,98,90,86,84};
    print_array(my_scores,5);
    set_array(my_scores,5,-74);
    print_array(my_scores,5);
    
}


void print(int num){
    cout << num << endl;
}


void print(char character){
    cout << character << endl;
}


// function prototype - you can declare function for the sake of order
double cal_area_circle(double radius){
    return pi* (radius*radius);
}


void volume_circle(double radius){
    cout << "The calculated volume is " << cal_volume(radius) << endl;
    
}

void area_circle(){
    double radius{};
    cout << "\nEnter the radius of circle:";
    cin>>radius;
    cout << "The area of a circle is: " << cal_area_circle(radius) << endl;
}

double cal_volume(double radius, double height){
    double volume {(radius*radius) * height};
    return volume;
}






