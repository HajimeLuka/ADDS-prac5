#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric{
public:

    ReduceGCD();
    virtual int binaryOperator(int input1, int input2);

};

#endif

