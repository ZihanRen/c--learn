/*
Problem description
 * 
You are to write a C++ program to compute the 
minimum number of distributed electric propulsion (DEP) required for an 
electric vertical take-off and landing (eVTOL) aircraft to take-off. The 
number of DEP may be varied based on the desired number of passengers.
Your program must be able to receive the desired number of passengers 
from user input before performing any calculations. Also, print out the 
computed result.

Suppose an average person weight is 65 kg, and an average carry-on 
weight is 5 kg. Every passenger has 1 carry-on and 1 pilot is required to 
operate the aircraft. The pilot does not have a carry-on.

Furthermore, assuming each DEP can provide the maximum thrust of 
1500 N, the thrust-to-weight ratio of each DEP is 10.10, an empty weight 
of the aircraft is 999.999 kg, a single battery weight to the aircraft empty 
weight ratio is 0.1, 3 batteries are required to power the entire system, and 
the aircraft is required to have an additional spare payload of 50 kg for 
safety purposes. Use the gravity acceleration of 9.81 m/s/s

*/

#include <iostream>
using namespace std;

int q1(){
    // var initialization
    const int p_weight {65};
    const int carry_on {5};
    const double thrust_per_DEP {1500}; // unit N
    const double th_to_weight{10.1};
    const double weight_aircraft {999.999};
    const double battery_weight_ratio {0.1};
    const int num_battery {3};
    const int safeload {50};
    const double g_earth {9.81};
    
    // ask for passagers number
    int num_passager {0};
    cout << "Input how many passagers:" << endl;
    cin >> num_passager ;
    
    // calculate other related variables
    double battery_grav { num_battery * battery_weight_ratio*weight_aircraft*g_earth };
    double pilot_grav {p_weight*g_earth};
    double passager_grav {(p_weight+carry_on)*g_earth};
    double safe_grav {safeload*g_earth};
    
    double total_grav_flight {safe_grav+passager_grav+pilot_grav+battery_grav};
    
    double total_thrust {total_grav_flight*th_to_weight};
    int num_DEP { total_thrust/thrust_per_DEP +1 };
    cout << "Total number of DEP required is " << num_DEP << endl;
    
    return 0;
    
}