#include "Aircraft.h"

Aircraft::Aircraft(
    std::vector<double> v_i,
    std::vector<double> p_i
    )
    :v{v_i},p{p_i}{
    std::cout << "constructor sucessfully initialized" << std::endl;
    }

void Aircraft::predict(std::vector<double> &pt,std::vector<double> &velocity,const double time_step){
    for (size_t i{0};i<pt.size();++i){
        pt[i] = pt[i] + velocity[i] * time_step;
    }
}