#include "twiddle.h"
#include <iostream>
#include <math.h>


double sum(std::vector <double> s);

Twiddle::Twiddle(){
    //std::vector<double> params = {pid.Kd, pid.Ki, pid.Kp};
    std::vector<double> dp = {0, 0, 1};
    std::cout << sum(dp) << std::endl;
}


double sum(std::vector <double> s){
    double sum = 0.0;
    for(auto&& a : s){
        sum += a;
    }
    return sum;
}
