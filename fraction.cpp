#include "fraction.h"

fraction::fraction(long long int n, long long int d ) //constructor with parameters
{
    num = n;
    denom = d;
    reduce();
}

fraction::fraction(const fraction &other) //copy constructor
{
    copy(other);
}

fraction::~fraction() //destructor
{
    num = 0;
    denom = 0;
}


//Assignment operators
fraction& fraction::operator=(const fraction &other)//assignment operator
{
    if(this != &other)
        copy(other);
    return *this;
}

fraction& fraction::operator+=(const fraction &other)
{
    *this = *this + other;
    return *this;
}

fraction& fraction::operator-=(const fraction &other)
{
    *this = *this - other;
    return *this;
}

fraction& fraction::operator*=(const fraction &other)
{
    *this = *this * other;
    return *this;
}

fraction& fraction::operator/=(const fraction &other)
{
    *this = *this / other;
    return *this;
}

fraction& fraction::operator+=(const long long int &other)
{
    *this = *this + other;
    return *this;
}

fraction& fraction::operator-=(const long long int &other)
{
    *this = *this - other;
    return *this;
}

fraction& fraction::operator*=(const long long int &other)
{
    *this = *this * other;
    return *this;
}

fraction& fraction::operator/=(const long long int &other)
{
    *this = *this / other;
    return *this;
}

//Accessor functions
long long int fraction::getNum() const
{
    return num;
}

long long int fraction::getDenom() const
{
    return denom;
}

//Mutator functions
void fraction::setNum(long long int n)
{
    num = n;
    reduce();
}

void fraction::setDenom(long long int d)
{
    if(d == 0)
        throw ILLEGAL_FRACTION;
    else
    {
        denom = d;
        reduce();
    }
}

//protected:

long long int& fraction::theNum()
{
    return num;
}

long long int& fraction::theDenom()
{
    return denom;
}

void fraction::setFraction(long long int x, long long int y)
{
    if(y == 0)
        throw ILLEGAL_FRACTION;
    num = x;
    denom = y;
    reduce();
}

//private:
void fraction::copy(const fraction &other)
{
    num = other.num;
    denom = other.denom;
    reduce();
}

void fraction::reduce()
{
    if(denom < 0)
    {
        num *= -1;
        denom *= -1;
    }
    long long int divisor = gcd(abs(num), abs(denom));
    num /= divisor;
    denom /= divisor;
}

long long int fraction::gcd(long long int p , long long int q)
{
    return q == 0 ? p : gcd(q, p%q);
}



//Friends that can take two fractions and create a third fraction

fraction operator*(const fraction &x, const fraction &y)
{
    return fraction(x.num*y.num, x.denom * y.denom);
}


fraction operator/(const fraction &x, const fraction &y)
{
    if(y == 0)
        throw ILLEGAL_FRACTION;
    else
        return fraction(x.num*y.denom, x.denom * y.num);
}


fraction operator-(const fraction &x, const fraction &y)
{
    return fraction(x.num*y.denom-x.denom*y.num, x.denom*y.denom);
}


fraction operator+(const fraction &x, const fraction &y)
{
    return fraction(x.num*y.denom+x.denom*y.num, x.denom*y.denom);
}

fraction operator^(const fraction &x, const fraction &y)
{
    if(x < 0 && y.getDenom()%2 == 0 && y<1 && y > -1)
        throw ILLEGAL_FRACTION;
    else
    {
        long double num, denom, decimo;
        long long int appoxNum, appoxDenom;
        num = y.num;
        denom = y.denom;
        decimo = num/denom;
        if(x.num < 0 && y.num%2 == 1)
            num = -pow(-x.num, decimo);
        else if (x.num < 0 && y.num%2 == 0)
            num = pow(-x.num, decimo);
        else
            num = pow(x.num, decimo);
        denom = pow(x.denom, decimo);
        appoxNum = num;
        appoxDenom = denom;
        if(appoxNum != num || appoxDenom != denom)
        {
            appoxNum = num * 1000000;
            appoxDenom = denom * 1000000;
        }
        return fraction(appoxNum, appoxDenom);
    }
}

//s that take an long long integer and a mixed number

fraction operator*(const fraction &x, const long long int &y)
{
    return fraction(x.num*y,x.denom);
}


fraction operator/(const fraction &x, const long long int &y)
{
    if(y == 0)
        throw ILLEGAL_FRACTION;
    else
        return fraction(x.num,x.denom*y);
}

fraction operator-(const fraction &x, const long long int &y)
{
    return fraction(x.num - y*x.denom ,x.denom);
}

fraction operator+(const fraction &x, const long long int &y)
{
    return fraction(x.num + y*x.denom ,x.denom);
}

fraction operator^(const fraction &x, const long long int &y)
{
    if(pow(x.num, y) == HUGE_VAL || pow(x.denom, y) == HUGE_VAL)
        return fraction(HUGE_VAL, 1);
    else
        return fraction(pow(x.num, y),pow(x.denom, y));
}

fraction operator*(const long long int &x, const fraction &y)
{
    return fraction(x *y.num, y.denom);
}


fraction operator/(const long long int &x, const fraction &y)
{
    if(y == 0)
        throw ILLEGAL_FRACTION;
    else
        return fraction(x *y.denom, y.num);
}


fraction operator-(const long long int &x, const fraction &y)
{
    return fraction(x*y.denom - y.num, y.denom);
}



fraction operator+(const long long int &x, const fraction &y)
{
    return fraction(x*y.denom + y.num, y.denom);
}

fraction operator^(const long long int &x, const fraction &y)
{
    if(pow(x, y.num/y.denom) == HUGE_VAL)
        return fraction(HUGE_VAL, 1);
    else
    {
        double num, denom, decimo;
        long long int appox;
        num = y.num;
        denom = y.denom;
        decimo = num/denom;
        decimo = pow(x, decimo);
        appox = decimo * 10000;
        return fraction(appox, 100000);
    }
}



//input / output friemds


ostream& operator<<(ostream &out, const fraction &x)
{
    out<<x.num<<"/"<<x.denom;
    return out;
}

istream& operator>>(istream &in, fraction &x)
{
    char junk;
    in>>x.num>>junk>>x.denom;
    return in;
}

//Comparision operator s

bool operator==(const fraction &x, const fraction &y)
{
    return x.num*y.denom == x.denom*y.num;
}


bool operator!=(const fraction &x, const fraction &y)
{
    return !(x == y);
}


bool operator>=(const fraction &x, const fraction &y)
{
    return x.num*y.denom >= x.denom*y.num;
}


bool operator<=(const fraction &x, const fraction &y)
{
    return x.num*y.denom <= x.denom*y.num;
}


bool operator>(const fraction &x, const fraction &y)
{
    return x.num*y.denom > x.denom*y.num;
}


bool operator<(const fraction &x, const fraction &y)
{
    return x.num*y.denom < x.denom*y.num;
}


//Comparision operators for fractions and long long integers

bool operator==(const fraction &x, const long long int &y)
{
    return x.num == y*x.denom;
}


bool operator!=(const fraction &x, const long long int &y)
{
    return !(x == y);
}

bool operator>=(const fraction &x, const long long int &y)
{
    return x.num >= y*x.denom;
}

bool operator<=(const fraction &x, const long long int &y)
{
    return x.num <= y*x.denom;
}

bool operator>(const fraction &x, const long long int &y)
{
    return x.num > y*x.denom;
}

bool operator<(const fraction &x, const long long int &y)
{
    return x.num < y*x.denom;
}


bool operator==(const long long int &x, const fraction &y)
{
    return y == x;
}


bool operator!=(const long long int &x, const fraction &y)
{
    return !(y == x);
}


bool operator>=(const long long int &x, const fraction &y)
{
    return x*y.denom >= y.num;
}

bool operator<=(const long long int &x, const fraction &y)
{
    return x*y.denom <= y.num;
}

bool operator>(const long long int &x, const fraction &y)
{
    return x*y.denom > y.num;
}

bool operator<(const long long int &x, const fraction &y)
{
    return x*y.denom < y.num;
}

