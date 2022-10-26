#include <iostream>
#include <vector>
#include "Aircraft.h"
#include "ACAS.h"

const double time_step{0.001};
const double safe_dist{6};

void print_safe_condition(int num_time_step){
    std::cout << "\nThe plane will crush after " << num_time_step << " time steps" << std::endl;
    }

void print_clear_condition(int num_time_step){
    std::cout << "\nThe situation has been cleared away after " << num_time_step << " time steps" << std::endl;
}

void print_1d(std::vector <double> vec){
    std::cout << std::endl;
    for (size_t i{0};i<vec.size();++i){
        std::cout << vec[i] << " ";
    }
    std::cout<< std::endl;
}

int main(){
    // initialize vector for position and speed
    std::vector<double> p1_t {0,0};
    std::vector<double> p2_t {10,15};
    std::vector<double> p3_t {20,8};
    std::vector<double> v1_t {600,600};
    std::vector<double> v2_t {0,-850};
    std::vector<double> v3_t {-900,0};

    // initialize aircrafts a1/a2/a3
    Aircraft a1(v1_t,p1_t);
    Aircraft a2(v2_t,p2_t);
    Aircraft a3(v3_t,p3_t);

    //initialize distance array for every aircrafts
    std::vector<double> dist_arr_all_1 {0,0,0};
    std::vector<double> dist_arr_all_2 {0,0,0};

    ACAS compute;
    bool condition{true};
    int num_time_step{0};
    
    while (condition){

        compute.dist_all(a1.get_p(),a2.get_p(),a3.get_p(),dist_arr_all_1);
        std::cout << "Time step: " << time_step << std::endl;
        print_1d(dist_arr_all_1);
        // test whether crash
        if (compute.is_crash(dist_arr_all_1,safe_dist)){
            print_safe_condition(num_time_step);
            break;
        }

        // calculate position
        a1.predict(p1_t,v1_t,time_step);
        a2.predict(p2_t,v2_t,time_step);
        a3.predict(p3_t,v3_t,time_step);

        // update object position
        a1.set_p(p1_t);
        a2.set_p(p2_t);
        a3.set_p(p3_t);
        num_time_step++;
        compute.dist_all(a1.get_p(),a2.get_p(),a3.get_p(),dist_arr_all_2);

        // test whether safe
        if (compute.is_clear(dist_arr_all_1,dist_arr_all_2)){
            print_clear_condition(num_time_step);
            break;
        }
    }
}