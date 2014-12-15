/**
  CS 8 Fall 2014 test 1
  node.h
  function: replicating STL queue
  source: Previous CS 8 class with modifications
*/

#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "node.h"

using namespace std;

enum DIR {FRONT, BACK};
enum QUEUE_ERROR {QUEUE_EMPTY, QUEUE_FULL, WRONG_WAY, ILLEGAL_QUEUE_SIZE};

template<typename T>
class myQueue
{
    public:
        myQueue(int s = 20);
        myQueue(const myQueue<T> &other);
        myQueue<T>& operator=(const myQueue<T> &other);
        ~myQueue();

        void enqueue(const T &data);//put in
        void dequeue(T &data);//take out
        T& peek(DIR where); //at the front
        bool full();
        bool empty();
        void resize(int s);
        int qty();
        void clear();

        myQueue<T>& operator<<(const T &data);//Enqueue
        myQueue<T>& operator>>(T & data);//Dequeue

        //Appends a whole queue to me
        myQueue<T>& operator<<(const myQueue<T> &other);

        //Append me to another queue
        myQueue<T>& operator>>(myQueue<T> &other);

        template<typename U>
        friend
        ostream& operator<<(ostream & out, myQueue<U> &s);

        template<typename U>
        friend
        istream& operator>>(istream &in, myQueue<U> &s);


    private:
        node<T> *front, *back;
        int size, mySize;

        void copy(const myQueue<T> &que);
};

template<typename T>
myQueue<T>::myQueue(int s)
{
    if(s < 1)
        throw ILLEGAL_QUEUE_SIZE;
    front = back = NULL;
    size = s;
    mySize = 0;
}

template<typename T>
myQueue<T>::myQueue(const myQueue<T> &other)
{
    copy(other);
}

template<typename T>
myQueue<T>& myQueue<T>::operator=(const myQueue<T> &other)
{
    if(this != &other)
    {
        clear();
        copy(other);
    }
    return *this;
}

template<typename T>
void myQueue<T>::copy(const myQueue<T> &que)
{
    clear();
    size = que.size;
    node<T> *temp = que.front;
    for(; temp; temp=temp->next)
        enqueue(temp->data);

}

template<typename T>
myQueue<T>::~myQueue()
{
    clear();
}

template<typename T>
void myQueue<T>::enqueue(const T &data)//put in
{
    if(full())
        throw QUEUE_FULL;
    node<T> *newNode = new node<T>(data);
    if(!front)
        front = back = newNode;
    else
    {
        back->next = newNode;
        back = back->next;
    }
    mySize++;
}

template<typename T>
void myQueue<T>::dequeue(T &data)//take out
{
    if(empty())
        throw QUEUE_EMPTY;
    data = front->data;
    node<T> *temp = front;
    front = front->next;
    mySize--;
    delete temp;
    temp = NULL;
}

template<typename T>
T& myQueue<T>::peek(DIR where) //at the front
{
    if(empty())
        throw QUEUE_EMPTY;
    switch(where)
    {
       case FRONT: return front->data;
       case BACK : return back->data;
       default: throw WRONG_WAY;
    }
}

template<typename T>
bool myQueue<T>::full()
{
    return size == mySize;
}

template<typename T>
bool myQueue<T>::empty()
{
    return !front;
}

template<typename T>
void myQueue<T>::resize(int s)
{
    T junk;
    while(s < mySize)
            dequeue(junk);
    size = s;
}

template<typename T>
int myQueue<T>::qty()
{
    return mySize;
}

template<typename T>
void myQueue<T>::clear()
{
    node<T> *temp = front;
    for(;front; temp = front)
    {
        front = front->next;
        delete temp;
    }
    front = back = NULL;
    mySize = 0;
}


template<typename T>
myQueue<T>& myQueue<T>::operator<<(const T &data)//Enqueue
{
    enqueue(data);
    return *this;
}

template<typename T>
myQueue<T>& myQueue<T>::operator>>(T & data)//Dequeue
{
    dequeue(data);
    return *this;
}

//Appends a whole queue to me
template<typename T>
myQueue<T>& myQueue<T>::operator<<(const myQueue<T> &other)
{
    if(mySize + other.mySize > size)
        resize(mySize + other.mySize);
    for(node<T> *temp = other.front; temp; temp = temp->next)
        enqueue(temp->data);
    return *this;
}

//Append me to another queue
template<typename T>
myQueue<T>& myQueue<T>::operator>>(myQueue<T> &other)
{

    if(mySize + other.mySize > other.size)
        other.resize(mySize + other.mySize);
    for(node<T> *temp = front; temp; temp = temp->next)
        other.enqueue(temp->data);
    return *this;
}


template<typename U>
ostream& operator<<(ostream & out, myQueue<U> &s)
{
    for(node<U> *temp = s.front; temp; temp=temp->next)
        out<<*temp;
    return out;
}

template<typename U>
istream& operator>>(istream &in, myQueue<U> &s)
{
    U data;
    s.clear();
   while(in>>data)
   {
       if(s.full())
           s.size++;
       s<<data;
    }
    return in;
}


#endif // MYQUEUE_H
