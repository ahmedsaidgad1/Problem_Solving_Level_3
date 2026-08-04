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

    T Get_Item(int index)
    {
        if (index < 0 || index >= _size)
        {
            return T();
        }

        for (int i = 0; i < _size; i++)
        {
            if (i == index)
            {
                return Original_Array[i];
            }
        }
        return T();
    }

    void Reverse_Array()
    {
        for (int i = 0; i < _size / 2; i++)
        {
            T temp = Original_Array[i];
            Original_Array[i] = Original_Array[_size - 1 - i];
            Original_Array[_size - 1 - i] = temp;
        }
    }

    void Clear_Array()
    {
        delete[] Original_Array;
        _size = 0;
        Original_Array = new T[_size];
    }

    void Delete_Item_At(int index)
    {
        if (index < 0 || index >= _size)
        {
            return;
        }

        T *Temp_Array = new T[_size - 1];

        for (int i = 0, j = 0; i < _size; i++)
        {
            if (i != index)
            {
                Temp_Array[j++] = Original_Array[i];
            }
        }

        delete[] Original_Array;
        Original_Array = Temp_Array;
        _size--;
    }

    void Delete_First_Item()
    {
        Delete_Item_At(0);
    }

    void Delete_Last_Item()
    {
        Delete_Item_At(_size - 1);
    }

    void Delete_Item(T item)
    {
        for(int i=0;i<_size,i++)
        {
            if(Original_Array[i]==item)
            {
                Delete_Item_At(i);
                return;
            }
        }

    }

    int size()
    {
        return _size;
    }

    void Resize(int New_Size)
    {
        if (New_Size < 0)
        {
            New_Size = 0;
        }

        T *Temp_Array = new T[New_Size];

        if (New_Size < _size)
        {
            _size = New_Size;
        }

        for (int i = 0; i < _size; i++)
        {
            Temp_Array[i] = Original_Array[i];
        }

        _size = New_Size;

        delete[] Original_Array;
        Original_Array = Temp_Array;
    }

    bool Is_Empty()
    {
        return (_size == 0 ? true : false);
    }

    void find(T item)
    {
        for (int i=0;i<_size;i++)
        {
            if (Original_Array[i] == item)
            {
                cout << "Item found at index: " << i << endl;
                return;
            }
        }
        cout << "Item not found in the array." << endl;
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