#include <iostream>
#include <string>
#include "cls_My_Dynamic_Array.h"

using namespace std;

void PrintHeader(const string &title)
{
    cout << "\n==================================================" << endl;
    cout << "  " << title << endl;
    cout << "==================================================" << endl;
}

void PrintSubHeader(const string &title)
{
    cout << "\n--------------------------------------------------" << endl;
    cout << ">> " << title << endl;
    cout << "--------------------------------------------------" << endl;
}

int main()
{
    PrintHeader("1. INITIAL ARRAY SETUP");

    cls_My_Dynamic_Array<int> MyArray(5);

    cout << "  Initial Size       : " << MyArray.size() << endl;
    cout << "  Is Array Empty?    : " << (MyArray.Is_Empty() ? "Yes" : "No") << endl;

    PrintHeader("2. POPULATING & ACCESSING ITEMS");

    MyArray.Set_Item(0, 10);
    MyArray.Set_Item(1, 20);
    MyArray.Set_Item(2, 30);
    MyArray.Set_Item(3, 40);
    MyArray.Set_Item(4, 50);

    cout << "  Array Items        : ";
    MyArray.Print_Array();

    cout << "  Item at Index [2]  : " << MyArray.Get_Item(2) << endl;

    if (!MyArray.Set_Item(10, 100))
    {
        cout << "  [WARNING] Index 10 is Out of Bounds!" << endl;
    }

    PrintHeader("3. REVERSE ARRAY OPERATION");

    MyArray.Reverse_Array();
    cout << "  Array After Reverse: ";
    MyArray.Print_Array();

    PrintHeader("4. RESIZING OPERATIONS");

    PrintSubHeader("Resizing Array from 5 to 8...");
    MyArray.Resize(8);
    cout << "  New Size           : " << MyArray.size() << endl;
    
    MyArray.Set_Item(5, 60);
    MyArray.Set_Item(6, 70);
    MyArray.Set_Item(7, 80);
    cout << "  Array After Adding : ";
    MyArray.Print_Array();

    PrintSubHeader("Resizing Array down to 3...");
    MyArray.Resize(3);
    cout << "  New Size           : " << MyArray.size() << endl;
    cout << "  Array After Shrink : ";
    MyArray.Print_Array();

    PrintHeader("5. CLEAR ARRAY OPERATION");

    MyArray.Clear_Array();
    cout << "  Size After Clear   : " << MyArray.size() << endl;
    cout << "  Is Array Empty?    : " << (MyArray.Is_Empty() ? "Yes" : "No") << endl;
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    cout << "\n==================================================\n\n";

    return 0;
}