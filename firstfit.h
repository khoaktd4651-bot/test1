#ifndef FIRSTFIT_H
#define FIRSTFIT_H
#pragma once
#include "Algorithmn.h"
class firstfit: public Algorithmn
{
public:
    int findblock(const vector<block>& memory , int size )override;
};

#endif // FIRSTFIT_H
