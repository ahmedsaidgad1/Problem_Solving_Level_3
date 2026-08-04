#pragma once
#include <iostream>
#include "cls_My_Dynamic_Array.h"
using namespace std;

template <class T>
class cls_My_Queue_Arr
{
protected:
    cls_My_Dynamic_Array<T> _Queue;

public:
    void push(T item)
    {
        _Queue.Insert_Last(item);
    }

    void pop()
    {
        _Queue.Delete_First_Item();
    }

    T front()
    {
        return _Queue.Get_Item(0);
    }

    T back()
    {
        return _Queue.Get_Item(_Queue.size() - 1);
    }

    int size()
    {
        return _Queue.size();
    }

    bool isEmpty()
    {
        return _Queue.size() == 0;
    }

    void clear()
    {
        _Queue.Clear_Array();
    }
    
    void print()
    {
        for (int i = 0; i < _Queue.size(); i++)
        {
            cout << _Queue.Get_Item(i) << " ";
        }
        cout << endl;
    }

    void reverse()
    {
        _Queue.Reverse_Array();
    }

    void resize(int newSize)
    {
        _Queue.Resize(newSize);
    }

    void resize(int newSize, T defaultValue)
    {
        int oldSize = _Queue.size();
        _Queue.Resize(newSize);
        for (int i = oldSize; i < newSize; i++)
        {
            _Queue.Set_Item(i, defaultValue);
        }
    }

    void find(T item)
    {
        _Queue.find(item);
    }

    void insert(T item)
    {
        _Queue.Insert_Last(item);
    }

    void insert_At(int index, T item)
    {
        _Queue.Insert_At(index, item);
    }

    void insert_First(T item)
    {
        _Queue.Insert_First(item);
    }

    void insert_Last(T item)
    {
        _Queue.Insert_Last(item);
    }
    
};