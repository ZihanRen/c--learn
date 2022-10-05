#include <iostream>
#include <cmath>
#include <array>
#include <memory>

using namespace std;
// set up global variables
const double beta {0.1};
const float error_threshold {1e-07};

void print_2d(const array<array<double,5>,10> arr){
    cout << "\n--------display 2d vector---------" << endl;

    for (size_t i{0};i<arr.size();++i){
        for (size_t j{0};j<arr[i].size();++j){
            cout << arr.at(i).at(j) << ' ';
    }
    cout << endl;
    }
}

void print_w (const array<double, 5> arr){
    
    for (size_t i{0};i<arr.size();++i){
        cout << arr[i] << " ";        
    }
    cout << endl;
}


void print_y (const array<double, 10> arr){
    
    cout << "\n--------display y (prediction) vector---------" << endl;
    for (size_t i{0};i<arr.size();++i){
        cout << arr[i] << " ";
    }
}

double err_sqrt (const array<double,10> &pred,const array<double,10> &real){
    double error {0};
    double error_avg{0};
    for (size_t i{0};i<pred.size();++i){
        error += pow(pred[i] - real[i],2); //aggregate all the erros
    }
    
    error_avg = error / (2*pred.size());
    return error_avg;
}

void err_vec(
    const array<double,10> &pred,
    const array<double,10> &real,
    array<double,10> &error_vector
    ){
    //get the error vector of those experiments
    for (size_t i{0};i<pred.size();++i){
        error_vector[i] = pred[i] - real[i]; //list error value for each experiment
    }
}


void prediction (
            const array<array<double,5>,10> x,
            const array<double, 5> w,
            array<double,10> &pred_v){
                
                for (size_t i{0};i<x.size();++i){
                    double pred_tmp_value = 0;
                    for (size_t j{0};j<x[i].size();++j){
                        pred_tmp_value += x[i][j]*w[j];
                        }
                pred_v.at(i) = pred_tmp_value;
   }
}

void update_w(
    array<double, 5> &w,
    const array<array<double,5>,10> x,
    array<double,10> &error_vector
    ){
        double gradient {0};
        for (size_t index_w{0};index_w<w.size();index_w++){
            // update each parameter
            gradient =0;
            for (size_t index_experiment{0};index_experiment<x.size();index_experiment++){
                //one gradient x[experiment_index][parameter(w)_index]
                gradient += error_vector[index_experiment] * x[index_experiment][index_w];
            }
            // update parameter one by one
            w[index_w] -= (gradient*beta)/(10);
        }
}


int main(){
    
    // define the vectors
    // x^R  (10,5) - observation space, dependent variables
    // w^R (5,1) - parameter space
    // y^R (10,1) - predicted variables
    // general logic:
    // y = x * w - get estimated values
    // step1 - err (y,y^hat)
    // step2 - Parameters update: W = W - step*e
    // jump to step1 recursively until err < 1e-07
    
    // observation space x
    array<array<double, 5>,10> x =
        {{
        {1,0.0515,0.0324,0.0997,0.0827},
        {1,0.0658,0.0302,0.0554,0.0395},
        {1,0.0951,0.0012,0.0515,0.0613},
        {1,0.0722,0.0540,0.0331,0.0819},
        {1,0.0400,0.0095,0.0430,0.0886},
        {1,0.0832,0.0147,0.0492,0.0931},
        {1,0.0134,0.0631,0.0071,0.0191},
        {1,0.0060,0.0859,0.0888,0.0259},
        {1,0.0084,0.0974,0.0065,0.0898},
        {1,0.0164,0.0571,0.0436,0.0593},
        }};
    
    // Parameter vector space. W_i
    array<double,5> w_i = {0,0,0,0,0};
    
    // predicted variable space. y
    array<double,10> y = 
                    {
                        0.2311,
                        0.5206,
                        0.3716,
                        0.3120,
                        0.3550,
                        0.2245,
                        0.8126,
                        0.6107,
                        0.4278,
                        0.5244
                        };
    
    cout << "\n*******************************Segmentation************************" << endl;
    
    // Initialize parameters regarding prediction
    array<double,10> pred_tmp{0};
    array<double,10> error_vector{0};
    double error_sqrt {1};
    
    int epoch {0};
    while (error_sqrt>error_threshold){
        
        // update pred_tmp
        prediction(x,w_i,pred_tmp);
        // update error vector
        err_vec(pred_tmp,y,error_vector);
        // get overall error
        error_sqrt = err_sqrt(pred_tmp,y);
        cout << "\nEpoch:" << epoch << "------------------------------------------------------" << endl;
        cout << "Current Error is: " << error_sqrt << endl;
        update_w(w_i,x,error_vector);
        epoch ++;
        
    }
    cout << "\nAfter epoch:" << epoch << endl;
    cout << "Final pitching moment coefficients is: " << endl;
    print_w(w_i);
    
    // this is my final result:
//    After epoch:218496
//    Final pitching moment coefficients is:
//    0.997714 -2.07363 -0.672552 -2.02584 -5.27416
}