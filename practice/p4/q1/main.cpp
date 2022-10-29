#include <iostream>
// initial constants definition
const double h {0.01}; //step_size
const double delta_a {3.14159/60}; //aileron deflection angle controlled by pilot - rad
const double l_p {-18000}; //aileron control coefficient
const double i_x {40670}; // moment of inertia of aircraft
const double l_dealta {69000};
const double gamma {0.35}; // rate of change of moment of intertia
const int t_total {10}; //
const int epoch{static_cast<int>(t_total/h)};

double cal_p_hat(double p, int t){
    double term1 {(l_p/(i_x-gamma*t)) * (p) };
    double term2 {(l_dealta/(i_x-gamma*t)) *delta_a};
    return term1 + term2;
}

void euler_method(double *p_t, double p_hat, const int t){
    *p_t += h*p_hat;
}

void midpoint_method(double *p_t, double p_hat, const int t){
    double new_p_hat {*p_t + (h/2)*p_hat};
    *p_t = *p_t + h* (cal_p_hat(new_p_hat,t+h/2));
}

void rk_method(double *p_t, double p_hat, const int t){
    double k1 = p_hat;
    double k2 = cal_p_hat(*p_t+h*(k1/2),t+h/2);
    double k3 = cal_p_hat(*p_t+h*(k2/2),t+h/2);
    double k4 = cal_p_hat(*p_t+h*k3,t+h);
    *p_t = *p_t + (h/6) * (k1+2*k2+2*k3+k4);
}

int main(){
    // initialize parameters
    double *p {nullptr};
    p = new double;
    double time {0}; //sec

    // Euler method
    *p = 0; // initialize pointing to 0
    for (int t{0};t<epoch;++t){
        euler_method(p,cal_p_hat(*p,t),t);
        time += 0.01;
    }
    std::cout << "Using Euler method, the estimation of p at time " << time << " seconds is " << *p << std::endl;

    // Midpoint method
    *p = 0;
    time = 0;
    for (int t{0};t<epoch;++t){
        midpoint_method(p,cal_p_hat(*p,t),t);
        time += 0.01;
    }
    std::cout << "Using mid point method, the estimation of p at time " << time << " seconds is " << *p << std::endl;

    //Runge-Kutta method
    *p = 0;
    time = 0;
    for (int t{0};t<epoch;++t){
        rk_method(p,cal_p_hat(*p,t),t);
        time += 0.01;
    }
    std::cout << "Using Runge-Kutta method, the estimation of p at time " << time << " seconds is " << *p << std::endl;


}