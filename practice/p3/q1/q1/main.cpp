#include <iostream>
#include <cmath>
#include <array>
#include <memory>

using namespace std;

double dist(double pt1 [],double pt2 []){
    return sqrt ( pow(pt1[0]-pt2[0],2) + pow(pt1[1]-pt2[1],2) );
}

double *dist_all(double pt1 [],double pt2 [],double pt3 [],int size=3){
    //initialize pointer of distance relationship
    double *dist_arr{nullptr};
    dist_arr = new double[size];
    *dist_arr = dist(pt1,pt2);
    *(dist_arr+1) = dist(pt1,pt3);
    *(dist_arr+2) = dist(pt2,pt3);
    return dist_arr;/
}

// there are two ways to modify position in place: 
// (1) through return pointer
// (2) through pass by reference - need vector
void position_update(
    double pt1[],
    const double v1 [],
    const double time_step,
    size_t size
    ){
    
    // pointer initialization
    double *pt_ptr = pt1;
    
    // update position through a loop
    for (size_t i{0};i<size;++i)
        *(pt_ptr+i) = pt1[i] + v1[i]*time_step;
}

bool judge_safe(const double* const dist_arr,const double safe_dist,int size=3){
    // input a distance array pointer
    // return whether they are going to crush
    for (int i{0};i<size;++i)
        if ( *(dist_arr+i) <= safe_dist)
            return true;
    return false;
}

void print_safe_condition(int num_time_step){
    cout << "\nThe plane will crush after " << num_time_step << " time steps" << endl;
    }

bool compare_dist (const double* arr1, const double* arr2){
    bool condition {true};
    int size {3};
    for (int i{0};i<size;++i)
        condition = (condition && (arr2[i]>arr1[i]));
    return condition;
    
}

void print_clear_condition(int num_time_step){
    cout << "\nThe situation has been cleared away after " << num_time_step << " time steps" << endl;
}

int main(){
    
    // variable initialization - according to geo-position
    // decompose velocity into x and y. x: west-east; y: sourth-north
    const double v1 [] {600,600}; // km/h
    const double v2 [] {0,-850};
    const double v3 [] {-900,0};
    //initialize original points 
    double pt_1 []{0,0};
    double pt_2 []{10,15};
    double pt_3 []{20,8};
    size_t pt_size {2};
    
    const double min_safe_dist {6}; //km
    const double t_step {0.001};
    
    cout << "---------------segmentation-----------------" << endl;
    cout << "test: Distance between p1 and p2: " << dist(pt_1,pt_2) << endl;
    
    cout << "---------------segmentation-----------------" << endl;
    
    // Initialize the pointers to distance array
    bool condition {true};
    double* dist_arr {nullptr};
    double* dist_arr_1 {nullptr};

    int num_time_step {0};
    
    while (condition){
        dist_arr = dist_all(pt_1,pt_2,pt_3,3);
        cout << "\nTime step: " << num_time_step << ", distance vector:" << endl;
        for (int i{0};i<3;++i)
            cout << *(dist_arr+i) << " ";
        cout << endl;
        
        // test whether they are going to crush with each other
        if ( judge_safe(dist_arr,min_safe_dist,3) ){
            print_safe_condition(num_time_step);
            break;
            }
        // update aircraft positions
        position_update(pt_1,v1,t_step,pt_size);
        position_update(pt_2,v2,t_step,pt_size);
        position_update(pt_3,v3,t_step,pt_size);
        num_time_step++;
        
        dist_arr_1 = dist_all(pt_1,pt_2,pt_3,3);
        
        // test whether aircrafts are separting with each other
        if ( compare_dist(dist_arr,dist_arr_1) ){
            print_clear_condition(num_time_step);
            break;
        }
        
        }
        
}