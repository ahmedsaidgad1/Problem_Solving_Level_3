#pragma once
#include <iostream>
#include "cls_Db_LinkedList.h"
using namespace std;

template <class T>
class cls_My_Queue
{
protected:
    clsDblLinkedList<T> _My_List;

public:
    void push(T item)
    {
        _My_List.Insert_At_End(item);
    }

    void pop()
    {
        _My_List.Delete_First_Node();
    }

    void print()
    {
        _My_List.Print_List();
    }

    int size()
    {
        return _My_List.Size();
    }

    bool Is_Empty()
    {
        return _My_List.Is_Empty();
    }

    T front()
    {
        auto node = _My_List.Get_Node(0);
        if (node != NULL)
            return node->value;
        return T();
    }

    T back()
    {
        auto node = _My_List.Get_Node(size() - 1);
        if (node != NULL)
            return node->value;
        return T();
    }

    T Get_Item_At(int index)
    {
        auto node =_My_List.Get_Node(index);
        if (node != NULL)
        {
            return node->value;
        }
        return T();
    }

    void reverse()
    {
        _My_List.Reverse();
    }

    void Update_Item(int index, T value)
    {
        auto node = _My_List.Get_Node(index);
        if (node != NULL)
        {
            node->value = value;
        }
    }

    void clear()
    {
        _My_List.Clear();
    }
    
    void Insert_After(int index, T value)
    {
        auto node = _My_List.Get_Node(index);
        if (node != NULL)
        {
            _My_List.Insert_After(node, value);
        }
    }

    void Insert_Front(T value)
    {
        _My_List.Insert_At_Begeninning(value);
    }

    void Insert_End(T value)
    {
        _My_List.Insert_At_End(value);
    }
};