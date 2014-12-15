/**
  CS 8 Fall 2014 test 1
  mixedNumber.h
  function: handle mixed number input
  source: Previous CS 3A class with modifications
*/

#ifndef MIXEDNUMBER_H
#define MIXEDNUMBER_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "fraction.h"

using namespace std;


class mixedNumber : public fraction
{
    public:
        mixedNumber();
        mixedNumber(long long int w, long long int n = 0, long long int d = 1);
        mixedNumber(const fraction &other);
        ~mixedNumber();
        mixedNumber(const mixedNumber &other);
        mixedNumber& operator=(const mixedNumber &other);
        mixedNumber& operator=(const fraction &other);
        void setValue(long long int w, long long int n = 0, long long int d = 1);

        friend
        ostream& operator<<(ostream& out, const mixedNumber &x);

        friend
        istream& operator>>(istream& in,  mixedNumber &x);

    private:

        void copy(const mixedNumber &other);
        void copy(const fraction &other);
};

#endif // MIXEDNUMBER_H
