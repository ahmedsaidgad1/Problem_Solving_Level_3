#pragma once
#include <iostream>
#include "cls_My_Queue.h"
using namespace std;

template <class T>
class cls_My_Stack : public cls_My_Queue<T>
{
public:
    void push(T item)
    {
        cls_My_Queue<T>::Insert_Front(item);
    }

    T top()
    {
        return cls_My_Queue<T>::front();
    }

    T bottom()
    {
        return cls_My_Queue<T>::back();
    }
};