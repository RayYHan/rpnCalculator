/**
  CS 8 Fall 2014 test 1
  fraction.h
  function: handle fraction input
  source: Previous CS 3A class with modifications
*/

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

enum ERRORS {ILLEGAL_FRACTION};

class fraction
{
    public:
        //fraction();//default constructor
        fraction(long long int n = 0, long long int d = 1); //constructor with parameters
        fraction(const fraction &other); //copy constructor
        ~fraction(); //destructor


        //Assignment operators
        fraction& operator=(const fraction &other);//assignment operator
        fraction& operator+=(const fraction &other);
        fraction& operator-=(const fraction &other);
        fraction& operator*=(const fraction &other);
        fraction& operator/=(const fraction &other);

        fraction& operator+=(const long long int &other);
        fraction& operator-=(const long long int &other);
        fraction& operator*=(const long long int &other);
        fraction& operator/=(const long long int &other);

        //Accessor functions
        long long int getNum() const;
        long long int getDenom() const;

        //Mutator functions
        void setNum(long long int n);
        void setDenom(long long int d);


        //Friends that can take two mixed numbers and create a third mixed number
        friend
        fraction operator*(const fraction &x, const fraction &y);

        friend
        fraction operator/(const fraction &x, const fraction &y);

        friend
        fraction operator-(const fraction &x, const fraction &y);

        friend
        fraction operator+(const fraction &x, const fraction &y);

        friend
        fraction operator^(const fraction &x, const fraction &y);

        //friends that take an integer and a mixed number
        friend
        fraction operator*(const fraction &x, const long long int &y);

        friend
        fraction operator/(const fraction &x, const long long int &y);

        friend
        fraction operator-(const fraction &x, const long long int &y);

        friend
        fraction operator+(const fraction &x, const long long int &y);

        friend
        fraction operator^(const fraction &x, const long long int &y);

        friend
        fraction operator*(const long long int &x, const fraction &y);

        friend
        fraction operator/(const long long int &x, const fraction &y);

        friend
        fraction operator-(const long long int &x, const fraction &y);

        friend
        fraction operator+(const long long int &x, const fraction &y);

        friend
        fraction operator^(const long long int &x, const fraction &y);


        //input / output friends

        friend//cout<<fractionA<<fractionB
        ostream& operator<<(ostream &out, const fraction &x);

        friend
        istream& operator>>(istream &in, fraction &x);

        //Comparision operator friends
        friend
        bool operator==(const fraction &x, const fraction &y);

        friend
        bool operator!=(const fraction &x, const fraction &y);

        friend
        bool operator>=(const fraction &x, const fraction &y);

        friend
        bool operator<=(const fraction &x, const fraction &y);

        friend
        bool operator>(const fraction &x, const fraction &y);

        friend
        bool operator<(const fraction &x, const fraction &y);

        //Comparision operators for fractions and integers
        friend
        bool operator==(const fraction &x, const long long int &y);

        friend
        bool operator!=(const fraction &x, const long long int &y);

        friend
        bool operator>=(const fraction &x, const long long int &y);

        friend
        bool operator<=(const fraction &x, const long long int &y);

        friend
        bool operator>(const fraction &x, const long long int &y);

        friend
        bool operator<(const fraction &x, const long long int &y);

        friend
        bool operator==(const long long int &x, const fraction &y);

        friend
        bool operator!=(const long long int &x, const fraction &y);

        friend
        bool operator>=(const long long int &x, const fraction &y);

        friend
        bool operator<=(const long long int &x, const fraction &y);

        friend
        bool operator>(const long long int &x, const fraction &y);

        friend
        bool operator<(const long long int &x, const fraction &y);

    protected:

        long long int& theNum();
        long long int& theDenom();
        void setFraction(long long int x, long long int y);

    private:
        long long int num, denom;

        void copy(const fraction &other);
        void reduce();
        long long int gcd(long long int p , long long int q);
};
#endif // FRACTION_H
