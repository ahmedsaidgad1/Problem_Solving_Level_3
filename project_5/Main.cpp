#include <iostream>
#include <string>
#include "cls_My_Queue_Arr.h"

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
    cls_My_Queue_Arr<int> MyQueue;

    // 1. Queue Setup & Push Operations
    PrintHeader("1. INITIAL QUEUE PUSH OPERATIONS");

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "  Queue Items        : ";
    MyQueue.print();
    cout << "  Queue Size         : " << MyQueue.size() << endl;
    cout << "  Front Item         : " << MyQueue.front() << endl;
    cout << "  Back Item          : " << MyQueue.back() << endl;
    cout << "  Is Empty?          : " << (MyQueue.isEmpty() ? "Yes" : "No") << endl;

    // 2. Queue Pop Operation
    PrintHeader("2. POP OPERATION");

    PrintSubHeader("Executing pop()...");
    MyQueue.pop();
    cout << "  Queue Items        : ";
    MyQueue.print();
    cout << "  Queue Size         : " << MyQueue.size() << endl;
    cout << "  New Front Item     : " << MyQueue.front() << endl;

    // 3. Custom Insertion Operations
    PrintHeader("3. CUSTOM INSERTION OPERATIONS");

    PrintSubHeader("Insert First (5)");
    MyQueue.insert_First(5);
    cout << "  Queue Items        : ";
    MyQueue.print();

    PrintSubHeader("Insert Last (60)");
    MyQueue.insert_Last(60);
    cout << "  Queue Items        : ";
    MyQueue.print();

    PrintSubHeader("Insert At Index [2] Value (15)");
    MyQueue.insert_At(2, 15);
    cout << "  Queue Items        : ";
    MyQueue.print();

    // 4. Search Operation
    PrintHeader("4. FIND OPERATION");
    cout << "  Searching for (30) : ";
    MyQueue.find(30);

    cout << "  Searching for (99) : ";
    MyQueue.find(99);

    // 5. Reverse Operation
    PrintHeader("5. REVERSE QUEUE OPERATION");
    MyQueue.reverse();
    cout << "  Queue After Reverse: ";
    MyQueue.print();

    // 6. Resizing Operations
    PrintHeader("6. RESIZING OPERATIONS");

    PrintSubHeader("Resize to size 10 with Default Value (100)");
    MyQueue.resize(10, 100);
    cout << "  Queue Items        : ";
    MyQueue.print();
    cout << "  New Size           : " << MyQueue.size() << endl;

    PrintSubHeader("Resize (Shrink) to size 4");
    MyQueue.resize(4);
    cout << "  Queue Items        : ";
    MyQueue.print();
    cout << "  New Size           : " << MyQueue.size() << endl;

    // 7. Clear Operation
    PrintHeader("7. CLEAR QUEUE OPERATION");
    MyQueue.clear();
    cout << "  Queue After Clear  : ";
    MyQueue.print();
    cout << "  Is Empty?          : " << (MyQueue.isEmpty() ? "Yes" : "No") << endl;
    cout << "  Queue Size         : " << MyQueue.size() << endl;

    cout << "\n==================================================\n\n";

    return 0;
}