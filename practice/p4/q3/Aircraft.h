#ifndef _AIRCRAFT_H_
#define _AIRCRAFT_H_
#include <iostream>
#include <vector>

// set up a general class
// initialize specific objects
class Aircraft
{
private:
    // initialize velocity vector
    std::vector<double> v;
    // initialize position
    std::vector<double> p;

public:
    void predict(std::vector<double> &vector1,std::vector<double> &vector2,const double time_step);
    std::vector<double> get_v(){return v;}
    std::vector<double> get_p(){return p;}
    void set_v(std::vector<double> v_i){v = v_i;}
    void set_p(std::vector<double> p_i){p = p_i;}

    // define constructor
    Aircraft(
    std::vector<double> v_i,
    std::vector<double> p_i
    );

    // define destructor
    ~Aircraft(){std::cout<<"Aircraft ends" << std::endl;}
};
#endif // _PLAYER_H_
