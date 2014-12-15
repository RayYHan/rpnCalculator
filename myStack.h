/**
  CS 8 Fall 2014 test 1
  myStack.h
  function: replicating STL stack
  source: Previous CS 8 class with modifications
*/

#ifndef MYSTACK_H
#define MYSTACK_H

#include "node.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

enum STACK_ERRORS {INVALID_SIZE, EMPTY, FULL};

template<typename T>
class myStack
{
    public:
        myStack(int s = 20);
        myStack(const T &d, int s = 5);

        myStack(const myStack<T> &other);
        myStack<T>& operator=(const myStack<T> &other);
        ~myStack();

        T pop();
        T top();
        void push(T d);
        bool full();
        bool empty();
        void resize(int s);
        int qty();
        void clear();

        myStack<T>& operator<<(const T &data);
        myStack<T>& operator>>(T & data);

        template<typename U>
        friend
        ostream& operator<<(ostream & out, myStack<U> &s);

        template<typename U>
        friend
        istream& operator>>(ostream &in, myStack<U> &s);

    private:
      node<T>* tos;
      int size, count;
};

template<typename T>
myStack<T>::myStack(int s)
{
    tos = NULL;
    size = s;
    count = 0;
}

template<typename T>
myStack<T>::myStack(const T &d, int s)
{
    if(s < 1)
        throw INVALID_SIZE;
    tos = new node<T>(d);
    size = s;
    count = 1;
}

template<typename T>
myStack<T>::myStack(const myStack<T> &other)
{
    copy(other);
}

template<typename T>
myStack<T>& myStack<T>::operator=(const myStack<T> &other)
{
    if(this != &other)
    {
        clear();
        copy(other);
    }
    return *this;
}

template<typename T>
myStack<T>::~myStack()
{
    clear();
}

template<typename T>
T myStack<T>::pop()
{
    if(empty())
        throw EMPTY;
    T data = tos->data;
    node<T>* temp = tos;
    tos = tos->next;
    delete temp;
    count--;
    return data;
}

template<typename T>
T myStack<T>::top()
{
    if(empty())
        throw EMPTY;
    return tos->data;
}

template<typename T>
void myStack<T>::push(T d)
{
    if(full())
        throw FULL;
    node<T> *temp = new node<T>(d);
    temp->next = tos;
    count++;
    tos = temp;
}

template<typename T>
bool myStack<T>::full()
{
    return count == size;
}

template<typename T>
bool myStack<T>::empty()
{
    return !tos;
}

template<typename T>
void myStack<T>::resize(int s)
{
    if(s > size)
        return;
    while(count > s)
        pop();
    size = s;
}

template<typename T>
int myStack<T>::qty()
{
    return count;
}

template<typename T>
void myStack<T>::clear()
{
    for(node<T>* temp = tos;  (temp = tos) ; tos = tos->next,
                      delete temp);
}

template<typename T>
myStack<T>& myStack<T>::operator<<(const T &data)
{
    push(data);
    return *this;
}

template<typename T>
myStack<T>& myStack<T>::operator>>(T & data)
{
    data = pop();
    return *this;
}

template<typename U>
ostream& operator<<(ostream & out, myStack<U> &s)
{
    node<U>* temp  = s.tos;
    while(temp)
        out<<*temp;
    return out;
}

template<typename U>
istream& operator>>(istream &in, myStack<U> &s)
{
    U data;
    while(in>>data)
        s<<data;
    return in;
}

#endif // MYSTACK_H
