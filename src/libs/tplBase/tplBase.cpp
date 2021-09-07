#include "tplBase.h"

tplBase::tplBase() : mBaseInt(0) {;}

tplBase::tplBase(const int base) : mBaseInt(base) {;}

void tplBase::set(const int base)
{
    mBaseInt = base;
}

int tplBase::base() const
{
    return mBaseInt;
}

int tplBase::addition(const int addend) const
{
    return mBaseInt + addend;
}

int tplBase::multiplication(const int multiplier) const
{
    return mBaseInt * multiplier;
}

int tplBase::add(const int addend)
{
    return mBaseInt += addend;
}

int tplBase::sign() const
{
    if (mBaseInt < 0) return -1;
    if (mBaseInt > 0) return +1;
    return 0;
}

void tplBase::sign(const int i)
{
    int newBase = qAbs(base());
    if (i < 0) newBase = -newBase;
    else if (i == 0) newBase = 0;
    set(newBase);
}

tplBase::operator int() const
{
    return base();
}

int tplBase::operator ()() const
{
    return base();
}
