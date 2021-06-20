#ifndef TWIDDLE_H
#define TWIDDLE_H

#include <vector>
#include "PID.h"

class Twiddle {

public:
    std::vector<double> params;
    std::vector<double> dp;


    int it; // # iterations
Twiddle();

Twiddle(PID pid);

virtual ~Twiddle(){};


};

#endif  // TWIDDLE_H