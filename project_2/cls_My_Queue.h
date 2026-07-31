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
        _My_List.Size();
    }

    bool Is_Empty()
    {
        return _My_List.Is_Empty();
    }

    T front()
    {
        return _My_List.Get_Node(0);
    }

    T back()
    {
        return _My_List.Get_Node(size() - 1);
    }
};