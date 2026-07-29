#include <iostream>
#include "cls_Dbl_LinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> mydblinkedlist;

    mydblinkedlist.Insert_At_Begeninning(5);
    mydblinkedlist.Insert_At_Begeninning(4);
    mydblinkedlist.Insert_At_Begeninning(3);
    mydblinkedlist.Insert_At_Begeninning(2);
    mydblinkedlist.Insert_At_Begeninning(1);

    cout << "Linked List Content : ";
    mydblinkedlist.Print_List();

    clsDblLinkedList<int>::Node *N1 = mydblinkedlist.Find_Node(5);
    if (N1 != NULL)
    {
        mydblinkedlist.Insert_After(N1, 6);
    }
    cout << "After Insert        : ";
    mydblinkedlist.Print_List();

    cout << "Number of items in the linked list: " << mydblinkedlist.Size() << endl;

    mydblinkedlist.Reverse();
    cout <<"Linked list after reverse: ";
    mydblinkedlist.Print_List();

    cout << "Executing .Clear()." << endl;
    mydblinkedlist.Clear();
    cout << "Number of item int the linked list = "<<mydblinkedlist.Size() << endl;

    return 0;
}