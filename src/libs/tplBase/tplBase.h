#pragma once

#include "tplBase_global.h"

class TPLBASE_EXPORT tplBase
{
public:
    tplBase();
    tplBase(const int base);
    void set(const int base);
    int base() const;
    int addition(const int addend) const;
    int multiplication(const int multiplier) const;
    int add(const int addend);
    bool isZero() const;
    int sign() const;
    void sign(const int i);
    int operator () () const;
    operator int () const;

private:
    int mBaseInt;    
};


