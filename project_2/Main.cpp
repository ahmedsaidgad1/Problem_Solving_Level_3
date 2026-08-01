#include <iostream>
#include <iomanip>
#include <string>
#include "cls_My_Queue.h"

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
    cls_My_Queue<int> My_Queue;

    My_Queue.push(10);
    My_Queue.push(20);
    My_Queue.push(30);
    My_Queue.push(40);
    My_Queue.push(50);

    PrintHeader("1. INITIAL QUEUE STATUS");
    
    cout << "  Queue List   : ";
    My_Queue.print();
    
    cout << "  Queue Size   : " << My_Queue.size() << endl;
    cout << "  Queue Front  : " << My_Queue.front() << endl;
    cout << "  Queue Back   : " << My_Queue.back() << endl;

    PrintHeader("2. EXECUTING QUEUE OPERATIONS");

    PrintAction("Executing pop()...");
    My_Queue.pop();
    cout << "  Queue List   : ";
    My_Queue.print();
    cout << "  Queue Size   : " << My_Queue.size() << endl;

    PrintAction("Fetch Item At Index [2]");
    cout << "  Value at Index 2 : " << My_Queue.Get_Item_At(2) << endl;

    PrintAction("Executing reverse()...");
    My_Queue.reverse();
    cout << "  Queue List   : ";
    My_Queue.print();

    PrintAction("Updating Item at Index [2] to (600)...");
    My_Queue.Update_Item(2, 600);
    cout << "  Queue List   : ";
    My_Queue.print();

    PrintAction("Inserting (800) After Index [2]...");
    My_Queue.Insert_After(2, 800);
    cout << "  Queue List   : ";
    My_Queue.print();

    PrintAction("Inserting (1000) At Front...");
    My_Queue.Insert_Front(1000);
    cout << "  Queue List   : ";
    My_Queue.print();

    PrintAction("Inserting (2000) At Back...");
    My_Queue.Insert_End(2000);
    cout << "  Queue List   : ";
    My_Queue.print();

    PrintHeader("3. CLEANUP OPERATIONS");
    PrintAction("Executing clear()...");
    My_Queue.clear();
    
    cout << "  Queue List   : ";
    My_Queue.print();
    cout << "  Is Empty?    : " << (My_Queue.Is_Empty() ? "Yes" : "No") << endl;
    cout << "  Queue Size   : " << My_Queue.size() << endl;

    cout << "\n==================================================\n\n";

    return 0;
}