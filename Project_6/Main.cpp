#include <iostream>
#include <string>
#include "cls_My_String.h"

using namespace std;

void PrintHeader(const string &title)
{
    cout << "\n==================================================" << endl;
    cout << "  " << title << endl;
    cout << "==================================================" << endl;
}

void PrintStatus(const string &action, const string &currentValue)
{
    cout << "  [ACTION] " << action << endl;
    cout << "  Current Value : \"" << currentValue << "\"" << endl;
    cout << "--------------------------------------------------" << endl;
}

int main()
{
    PrintHeader("UNDO / REDO STRING DEMO");

    // 1. Initial Setup
    cls_My_String S1("Ahmed");
    PrintStatus("Initial Value Set in Constructor", S1.Get_Value());

    // 2. Set New Values
    S1.Set_Value("Ahmed 1");
    PrintStatus("Set Value -> \"Ahmed 1\"", S1.Get_Value());

    S1.Set_Value("Ahmed 2");
    PrintStatus("Set Value -> \"Ahmed 2\"", S1.Get_Value());

    S1.Set_Value("Ahmed 3");
    PrintStatus("Set Value -> \"Ahmed 3\"", S1.Get_Value());

    // 3. Testing Undo
    PrintHeader("TESTING UNDO OPERATIONS");

    S1.Undo();
    PrintStatus("Executed Undo() [1]", S1.Get_Value());

    S1.Undo();
    PrintStatus("Executed Undo() [2]", S1.Get_Value());

    S1.Undo();
    PrintStatus("Executed Undo() [3]", S1.Get_Value());

    // 4. Testing Redo
    PrintHeader("TESTING REDO OPERATIONS");

    S1.Redo();
    PrintStatus("Executed Redo() [1]", S1.Get_Value());

    S1.Redo();
    PrintStatus("Executed Redo() [2]", S1.Get_Value());

    // 5. Testing Clear Redo Stack on New Set
    PrintHeader("TESTING REDO STACK CLEAR ON NEW SET");

    S1.Set_Value("New Branch Text");
    PrintStatus("Set Value -> \"New Branch Text\"", S1.Get_Value());

    S1.Redo(); // Should do nothing because Redo stack was cleared
    PrintStatus("Attempted Redo() after Set_Value()", S1.Get_Value());

    S1.Undo();
    PrintStatus("Executed Undo()", S1.Get_Value());

    cout << "\n==================================================\n\n";

    return 0;
}