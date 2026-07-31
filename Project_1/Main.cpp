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

    cout << "=========================================\n";
    cout << "  DOUBLY LINKED LIST - INDEX TEST SUITE  \n";
    cout << "=========================================\n";

    cout << "Initial List Content     : ";
    mydblinkedlist.Print_List();

    clsDblLinkedList<int>::Node *N1 = mydblinkedlist.Find_Node(5);
    if (N1 != NULL)
    {
        mydblinkedlist.Insert_After(N1, 6);
    }
    cout << "List After Inserting 6   : ";
    mydblinkedlist.Print_List();

    cout << "Total Elements Count     : " << mydblinkedlist.Size() << endl;
    cout << "-----------------------------------------\n";

    int targetIndex = 2;
    clsDblLinkedList<int>::Node *retrievedNode = mydblinkedlist.Get_Node(targetIndex);

    if (retrievedNode != NULL)
    {
        cout << "[Get_Node Test] Item at Index [" << targetIndex << "] : " << retrievedNode->value << endl;
    }
    else
    {
        cout << "[Get_Node Test] Index [" << targetIndex << "] Out of Bounds!\n";
    }

    cout << "-----------------------------------------\n";

    mydblinkedlist.Reverse();
    cout << "List After Reversal      : ";
    mydblinkedlist.Print_List();

    cout << "\nExecuting Clear() Operation...\n";
    mydblinkedlist.Clear();
    cout << "Elements Count Post-Clear: " << mydblinkedlist.Size() << endl;
    cout << "=========================================\n";

    return 0;
}