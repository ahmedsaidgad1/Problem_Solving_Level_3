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

int main()
{
    PrintHeader("DYNAMIC ARRAY TEST SUITE");

    cls_My_Dynamic_Array<int> MyArray(5);

    cout << "  Initial Array Size : " << MyArray.size() << endl;
    cout << "  Is Array Empty?    : " << (MyArray.Is_Empty() ? "Yes" : "No") << endl;

    MyArray.Set_Item(0, 10);
    MyArray.Set_Item(1, 20);
    MyArray.Set_Item(2, 30);
    MyArray.Set_Item(3, 40);
    MyArray.Set_Item(4, 50);

    PrintHeader("ARRAY CONTENT & ELEMENTS ACCESS");

    cout << "  Array Items        : ";
    MyArray.Print_Array();

    if (!MyArray.Set_Item(10, 100))
    {
        cout << "  [WARNING] Index 10 is Out of Bounds!" << endl;
    }

    cout << "\n==================================================\n\n";

    return 0;
}