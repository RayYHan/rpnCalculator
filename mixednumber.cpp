#include "mixednumber.h"

mixedNumber::mixedNumber()
{

}

mixedNumber::mixedNumber(long long int w, long long int n, long long int d)
{
    setFraction(d*w+n,d);
}

mixedNumber::mixedNumber(const fraction &other)
{
    copy(other);
}

mixedNumber::~mixedNumber()
{

}

mixedNumber::mixedNumber(const mixedNumber &other)
{
    copy(other);
}

mixedNumber& mixedNumber::operator=(const mixedNumber &other)
{
    if(this != &other)
        copy(other);
    return *this;
}

mixedNumber& mixedNumber::operator=(const fraction &other)
{
    copy(other);
    return *this;
}


void mixedNumber::copy(const mixedNumber &other)
{
    setFraction(other.getNum(), other.getDenom());
}


void mixedNumber::copy(const fraction &other)
{
    setFraction(other.getNum(), other.getDenom());
}

void mixedNumber::setValue(long long int w, long long int n, long long int d)
{
    setFraction(d*w+n, d);
}

ostream& operator<<(ostream& out, const mixedNumber &x)
{
    long long int whole = x.getNum()/x.getDenom(), num;
    if(whole != 0)
        num = abs(x.getNum()) % x.getDenom();
    else
        num = x.getNum();
    {
        if(num != 0)
        {
            if(whole != 0)
                out<<whole<<" ";
            out<<num<<"/"<<x.getDenom();
        }
        else
        {
            out<<whole;
        }
    }
    return out;
}


istream& operator>>(istream& in,  mixedNumber &x)
{
    long long int whole = 0, num = 0, denom = 1;
    char junk;
    if(in.peek() == '.')
    {
        whole = 0;
        in>>junk>>num;
        denom = 10;
        while((num/denom) >= 1)
            denom *= 10;
    }
    else
    {
        in>>whole;
        if(in.peek() == '/')
        {
            in>>junk;
            if(isdigit(in.peek()))
            {
                num = whole;
                whole = 0;
                in>>denom;
            }
            else
            {
                num = 0;
                denom = 1;
                in.unget();
            }
        }
        else if(in.peek() == '.')
        {
            in>>junk>>num;
            denom = 10;
            while((num/denom) >= 1)
                denom *= 10;
        }
        else
        {
            char space = in.get();
            if(space != ' ')
                in.unget();
            else
                if(in.peek() >='0' && in.peek() <= '9')
                {
                    in >>num>>junk>>denom;
                }
                else
                    in.unget();
        }
    }
    cout<<"whole = "<<whole<<" num = "<<num<<" denom = "<<denom<<endl;
    if(whole < 0)
        x.setFraction(-(denom*abs(whole)+num), denom);
    else
        x.setFraction(denom*whole+num, denom);
    return in;
}
