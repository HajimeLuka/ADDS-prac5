#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric{
    public:
    FilterForTwoDigitPositive();
    virtual bool g(int input);
};
#endif