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
    // 1. Initial Setup
    PrintHeader("1. INITIAL ARRAY SETUP & SET ITEMS");

    cls_My_Dynamic_Array<int> MyArray(5);

    MyArray.Set_Item(0, 10);
    MyArray.Set_Item(1, 20);
    MyArray.Set_Item(2, 30);
    MyArray.Set_Item(3, 40);
    MyArray.Set_Item(4, 50);

    cout << "  Initial Array      : ";
    MyArray.Print_Array();
    cout << "  Current Size       : " << MyArray.size() << endl;
    cout << "  Is Empty?          : " << (MyArray.Is_Empty() ? "Yes" : "No") << endl;
    cout << "  Get Item at [2]    : " << MyArray.Get_Item(2) << endl;

    // 2. Insert Operations
    PrintHeader("2. INSERTION OPERATIONS");

    PrintSubHeader("Insert (25) At Index [2]");
    MyArray.Insert_At(2, 25);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Insert_First (5)");
    MyArray.Insert_First(5);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Insert_Last (60)");
    MyArray.Insert_Last(60);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Insert_Before Index [3] (15)");
    MyArray.Insert_Before(3, 15);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Insert_After Index [3] (18)");
    MyArray.Insert_After(3, 18);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();
    cout << "  Current Size       : " << MyArray.size() << endl;

    // 3. Search Operations
    PrintHeader("3. FIND OPERATION");
    cout << "  Searching for (30) : ";
    MyArray.find(30);

    cout << "  Searching for (99) : ";
    MyArray.find(99);

    // 4. Reverse Array
    PrintHeader("4. REVERSE ARRAY OPERATION");
    MyArray.Reverse_Array();
    cout << "  Array After Reverse: ";
    MyArray.Print_Array();

    // 5. Deletion Operations
    PrintHeader("5. DELETION OPERATIONS");

    PrintSubHeader("Delete First Item");
    MyArray.Delete_First_Item();
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Delete Last Item");
    MyArray.Delete_Last_Item();
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Delete Item At Index [2]");
    MyArray.Delete_Item_At(2);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    PrintSubHeader("Delete Specific Item By Value (25)");
    MyArray.Delete_Item(25);
    cout << "  Array Contents     : ";
    MyArray.Print_Array();
    cout << "  Current Size       : " << MyArray.size() << endl;

    // 6. Resizing Operations
    PrintHeader("6. RESIZING OPERATIONS");

    PrintSubHeader("Resizing Array to Size (8)");
    MyArray.Resize(8);
    cout << "  New Size           : " << MyArray.size() << endl;
    cout << "  Array After Resize : ";
    MyArray.Print_Array();

    PrintSubHeader("Shrinking Array to Size (3)");
    MyArray.Resize(3);
    cout << "  Array After Shrink : ";
    MyArray.Print_Array();
    cout << "  New Size           : " << MyArray.size() << endl;

    // 7. Clear Array
    PrintHeader("7. CLEAR ARRAY OPERATION");
    MyArray.Clear_Array();
    cout << "  Size After Clear   : " << MyArray.size() << endl;
    cout << "  Is Empty?          : " << (MyArray.Is_Empty() ? "Yes" : "No") << endl;
    cout << "  Array Contents     : ";
    MyArray.Print_Array();

    cout << "\n==================================================\n\n";

    return 0;
}