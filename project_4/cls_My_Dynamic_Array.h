#pragma once
#include <iostream>
using namespace std;

template <class T>
class cls_My_Dynamic_Array
{
protected:
    int _size;

public:
    T *Original_Array;
    cls_My_Dynamic_Array(int size = 0)
    {
        if (size < 0)
        {
            size = 0;
        }
        _size = size;
        Original_Array = new T[_size];
    }

    ~cls_My_Dynamic_Array()
    {
        delete[] Original_Array;
    }

    bool Set_Item(int index, T item)
    {
        if (index < 0 || index >= _size)
        {
            return false;
        }
        Original_Array[index] = item;
        return true;
    }

    int size()
    {
        return _size;
    }

    bool Is_Empty()
    {
        return (_size == 0 ? true : false);
    }

    void Print_Array()
    {
        for (int i = 0; i < _size; i++)
        {
            cout << Original_Array[i] << " ";
        }
        cout << endl;
    }
};