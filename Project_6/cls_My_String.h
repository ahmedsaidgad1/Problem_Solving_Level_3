#pragma once
#include <stack>
#include <string>
using namespace std;

class cls_My_String
{
private:
    string _Value;
    stack<string> _Undo;
    stack<string> _Redo;

public:
    cls_My_String(string Value = "")
    {
        _Value = Value;
    }

    string Get_Value()
    {
        return _Value;
    }

    void Set_Value(string Value)
    {
        _Undo.push(_Value);
        _Value = Value;
        while (!_Redo.empty())
            _Redo.pop();
    }

    void Undo()
    {
        if (!_Undo.empty())
        {
            _Redo.push(_Value);
            _Value = _Undo.top();
            _Undo.pop();
        }
    }

    void Redo()
    {
        if (!_Redo.empty())
        {
            _Undo.push(_Value);
            _Value = _Redo.top();
            _Redo.pop();
        }
    }
};