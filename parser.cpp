#include "parser.h"

bool parse(string x, myQueue<term> &y)
{
    stringstream ss;
    myStack<char> opStack;
    bool opInputed;
    mixedNumber *num;
    int parenCount;
    term termNow;
    char *optr, op;

    opInputed = true;
    parenCount = 0;
    ss<<x;
    opStack.clear();
    opStack<<'(';
    while(ss)
    {
        if(ss.peek() == ' ')
            ss.ignore(1);
        else if(opInputed)
        {
            if(ss.peek() == '-')
            {
                op = ss.get();
                if(ss.peek() == '(' || ss.peek() == '-')
                {
                    num = new mixedNumber;
                    try
                    {
                        *num = mixedNumber(-1,0,1);
                    }
                    catch(...)
                    {
                        return false;
                    }
                    termNow.typeOp = false;
                    termNow.value = num;
                    if(y.full())
                        return false;
                    else
                        y<<termNow;
                    opStack.push('*');
                    opInputed = true;
                }
                else if(isdigit(ss.peek()) || ss.peek() == '.')
                {
                    ss.unget();
                    num = new mixedNumber;
                    try
                    {
                        ss>>*num;
                    }
                    catch(...)
                    {
                        return false;
                    }
                    if(*num == 2147483647)
                        return false;
                    else
                    {
                        termNow.typeOp = false;
                        termNow.value = num;
                        if(y.full())
                            return false;
                        else
                            y<<termNow;
                        opInputed = false;
                    }
                }
            }
            else if(isdigit(ss.peek()) || ss.peek() == '.')
            {
                num = new mixedNumber;
                try
                {
                    ss>>*num;
                }
                catch(...)
                {
                    return false;
                }
                if(*num == 2147483647)
                    return false;
                else
                {
                    termNow.typeOp = false;
                    termNow.value = num;
                    if(y.full())
                        return false;
                    else
                        y<<termNow;
                    opInputed = false;
                }
            }
            else if(ss.peek() == '(')
            {
                opStack<<ss.get();
                parenCount++;
                opInputed = true;
            }
            else
                return false;
        }
        else
        {
            if(ss.peek() == '+' || ss.peek() == '-')
            {
                opInputed = true;
                while(opStack.top() != '(')
                {
                    optr = new char;
                    *optr = opStack.pop();
                    termNow.typeOp = true;
                    termNow.value = optr;
                    if(y.full())
                        return false;
                    else
                        y<<termNow;
                }
                ss>>op;
                opStack.push(op);
            }
            else if(ss.peek() == '*' || ss.peek() == '/')
            {
                opInputed = true;
                while(opStack.top() != '(' && opStack.top() != '+' && opStack.top() != '-')
                {
                    optr = new char;
                    *optr = opStack.pop();
                    termNow.typeOp = true;
                    termNow.value = optr;
                    if(y.full())
                        return false;
                    else
                        y<<termNow;
                }
                ss>>op;
                opStack.push(op);
            }
            else if(ss.peek() == '^')
            {
                opInputed = true;
                while(opStack.top() == '^')
                {
                    optr = new char;
                    *optr = opStack.pop();
                    termNow.typeOp = true;
                    termNow.value = optr;
                    if(y.full())
                        return false;
                    else
                        y<<termNow;
                }
                ss>>op;
                opStack.push(op);
            }
            else if(ss.peek() == ')')
            {
                if(parenCount)
                {
                    opInputed = false;
                    parenCount--;
                    ss.ignore(1);
                    while(opStack.top() != '(')
                    {
                        optr = new char;
                        *optr = opStack.pop();
                        termNow.typeOp = true;
                        termNow.value = optr;
                        if(y.full())
                            return false;
                        else
                            y<<termNow;
                    }
                    opStack.pop();
                }
                else
                    return false;
            }
            else if(isdigit(ss.peek()) || ss.peek() == '(')
                return false;
        }
    }
    while(opStack.top() != '(')
    {
        optr = new char;
        *optr = opStack.pop();
        termNow.typeOp = true;
        termNow.value = optr;
        if(y.full())
            return false;
        else
            y<<termNow;
    }
    if(parenCount != 0)
        return false;
    else
        return true;
}
