#ifndef ALGORITHMN_H
#define ALGORITHMN_H
#pragma once
using namespace std;
#include <vector>
#include "block.h"
class Algorithmn{
public:
    virtual ~ Algorithmn() = default;
    virtual int findblock(const vector<block>&memory, int size) =0;

};

#endif // ALGORITHMN_H
