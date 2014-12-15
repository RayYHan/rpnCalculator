/**
  CS 8 Fall 2014 test 1
  node.h
  function: linked list
  source: Previous CS 8 class with modifications
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

template<typename T>
struct node
{
    T data;
    node* next;

    node();
    node(const T &d);

    template<typename U>
    friend
    ostream operator<< (ostream& out, node<U> t);
};

template<typename T>
node<T>::node()
{
    next = NULL;
}

template<typename T>
node<T>::node(const T &d)
{
    data = d;
    next = NULL;
}

template<typename U>
ostream& operator<<(ostream& out, node<U> t)
{
    out<<t.data<<" ";
    return out;
}


#endif // NODE_H
