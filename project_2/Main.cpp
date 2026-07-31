#include <iostream>
#include <iomanip>
#include "cls_My_Queue.h"

using namespace std;

void PrintHeader(const string &title)
{
    cout << "\n=========================================\n";
    cout << "  " << title << endl;
    cout << "=========================================\n\n";
}

int main()
{
    cls_My_Queue<int> My_Queue;

    My_Queue.push(10);
    My_Queue.push(20);
    My_Queue.push(30);
    My_Queue.push(40);
    My_Queue.push(50);

    PrintHeader("MY QUEUE DETAILS");

    cout << "  Items List   : ";
    My_Queue.print();

    cout << "  ---------------------------------------\n";
    cout << "  Queue Size   : " << My_Queue.size() << endl;
    cout << "  Queue Front  : " << My_Queue.front() << endl;
    cout << "  Queue Back   : " << My_Queue.back() << endl;

    PrintHeader("OPERATIONS");
    cout << "  [ACTION] Executing pop()..." << endl;
    My_Queue.pop();

    cout << "\n  Items List After Pop : ";
    My_Queue.print();
    cout << "  Queue Size Now       : " << My_Queue.size() << endl;

    cout << "\n=========================================\n";

    system("pause>0");
    return 0;
}