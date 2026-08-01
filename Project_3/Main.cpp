#include <iostream>
#include <iomanip>
#include <string>
#include "cls_My_Stack.h"

using namespace std;

void PrintHeader(const string &title)
{
    cout << "\n==================================================" << endl;
    cout << "  " << title << endl;
    cout << "==================================================" << endl;
}

void PrintAction(const string &action)
{
    cout << "\n--------------------------------------------------" << endl;
    cout << ">> " << action << endl;
    cout << "--------------------------------------------------" << endl;
}

int main()
{
    cls_My_Stack<int> My_Stack;

    My_Stack.push(10);
    My_Stack.push(20);
    My_Stack.push(30);
    My_Stack.push(40);
    My_Stack.push(50);

    PrintHeader("1. INITIAL STACK STATUS");

    cout << "  Stack List     : ";
    My_Stack.print();

    cout << "  Stack Size     : " << My_Stack.size() << endl;
    cout << "  Stack Top      : " << My_Stack.top() << endl;
    cout << "  Stack Bottom   : " << My_Stack.bottom() << endl;

    PrintHeader("2. EXECUTING STACK OPERATIONS");

    PrintAction("Executing pop()...");
    My_Stack.pop();
    cout << "  Stack List   : ";
    My_Stack.print();
    cout << "  Stack Size   : " << My_Stack.size() << endl;

    PrintAction("Fetch Item At Index [2]");
    cout << "  Value at Index 2 : " << My_Stack.Get_Item_At(2) << endl;

    PrintAction("Executing reverse()...");
    My_Stack.reverse();
    cout << "  Stack List   : ";
    My_Stack.print();

    PrintAction("Updating Item at Index [2] to (600)...");
    My_Stack.Update_Item(2, 600);
    cout << "  Stack List   : ";
    My_Stack.print();

    PrintAction("Inserting (800) After Index [2]...");
    My_Stack.Insert_After(2, 800);
    cout << "  Stack List   : ";
    My_Stack.print();

    PrintAction("Inserting (1000) At Front...");
    My_Stack.Insert_Front(1000);
    cout << "  Stack List   : ";
    My_Stack.print();

    PrintAction("Inserting (2000) At Back...");
    My_Stack.Insert_End(2000);
    cout << "  Stack List   : ";
    My_Stack.print();

    PrintHeader("3. CLEANUP OPERATIONS");
    PrintAction("Executing clear()...");
    My_Stack.clear();

    cout << "  Stack List   : ";
    My_Stack.print();
    cout << "  Is Empty?    : " << (My_Stack.Is_Empty() ? "Yes" : "No") << endl;
    cout << "  Stack Size   : " << My_Stack.size() << endl;

    cout << "\n==================================================\n\n";

    return 0;
}