#include "ACAS.h"
#include <vector>
ACAS::ACAS(){
    std::cout << "ACAS initialized" << std::endl;
}

void ACAS::dist_all(
        const std::vector<double> pt1,
        const std::vector<double> pt2,
        const std::vector<double> pt3,
        const std::vector<double> pt4,
        std::vector<double> &dist_all_t){
        dist_all_t[0] = dist(pt1,pt2);
        dist_all_t[1] = dist(pt1,pt3);
        dist_all_t[2] = dist(pt1,pt4);
        dist_all_t[3] = dist(pt2,pt3);
        dist_all_t[4] = dist(pt2,pt4);
        dist_all_t[5] = dist(pt3,pt4);
        }

bool ACAS::is_crash(const std::vector<double> dist_arr, const double safe_dist){
    for (size_t i{0};i<dist_arr.size();++i)
        if ( dist_arr[i] <= safe_dist)
            return true;
    return false;
};

// is_clear
bool ACAS::is_clear(const std::vector<double> dist_arr_t1, const std::vector<double> dist_arr_t2){
    bool condition {true};
    for (size_t i{0};i<dist_arr_t1.size();++i)
        condition = (condition && (dist_arr_t2[i]>dist_arr_t1[i]));
    return condition;
};