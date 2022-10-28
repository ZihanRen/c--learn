#ifndef _ACAS_H_
#define _ACAS_H_
#include <iostream>
#include <vector>
#include <cmath>

// set up a general class
// initialize specific objects
class ACAS
{
public:
    //compute distance
    double dist(const std::vector<double> pt1, const std::vector<double> pt2){
        return std::sqrt ( std::pow(pt1[0]-pt2[0],2) + std::pow(pt1[1]-pt2[1],2) );
    }

    void dist_all(
        const std::vector<double> pt1,
        const std::vector<double> pt2,
        const std::vector<double> pt3,
        const std::vector<double> pt4,
        std::vector<double> &dist_all);
    // is_crash
    bool is_crash(const std::vector<double> dist_arr, const double safe_dist);
    // is_clear
    bool is_clear(const std::vector<double> dist_arr_t1, const std::vector<double> dist_arr_t2);

    // define constructor
    ACAS();

    // define destructor
    ~ACAS(){std::cout<<"ACAS ends" << std::endl;}
};
#endif // _PLAYER_H_
