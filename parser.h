#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>

#include "myStack.h"
#include "myQueue.h"
#include "mixednumber.h"

using namespace std;

struct term
{
    bool typeOp;
    void* value;
};

bool parse(string x, myQueue<term> &y);

#endif // PARSER_H
