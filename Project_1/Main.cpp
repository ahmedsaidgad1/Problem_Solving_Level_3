#include <iostream>
#include "cls_Dbl_LinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList<int> My_Db_Linked_List;
    My_Db_Linked_List.Insert_At_Begeninning(5);
    My_Db_Linked_List.Insert_At_Begeninning(4);
    My_Db_Linked_List.Insert_At_Begeninning(3);
    My_Db_Linked_List.Insert_At_Begeninning(2);
    My_Db_Linked_List.Insert_At_Begeninning(1);

    cout << "=========================================\n";
    cout << "  DOUBLY LINKED LIST - INDEX TEST SUITE  \n";
    cout << "=========================================\n";

    cout << "Initial List Content     : ";
    My_Db_Linked_List.Print_List();

    clsDblLinkedList<int>::Node *N1 = My_Db_Linked_List.Find_Node(5);
    if (N1 != NULL)
    {
        My_Db_Linked_List.Insert_After(N1, 6);
    }
    cout << "List After Inserting 6   : ";
    My_Db_Linked_List.Print_List();

    cout << "Total Elements Count     : " << My_Db_Linked_List.Size() << endl;

    cout << "-----------------------------------------\n";

    int targetIndex = 2;
    clsDblLinkedList<int>::Node *retrievedNode = My_Db_Linked_List.Get_Node(targetIndex);

    if (retrievedNode != NULL)
    {
        cout << "[Get_Node Test] Item at Index [" << targetIndex << "] : " << retrievedNode->value << endl;
    }
    else
    {
        cout << "[Get_Node Test] Index [" << targetIndex << "] Out of Bounds!\n";
    }

    cout << "-----------------------------------------\n";

    My_Db_Linked_List.Reverse();
    cout << "List After Reversal      : ";
    My_Db_Linked_List.Print_List();

    cout << "-----------------------------------------\n";

    My_Db_Linked_List.Update_Item(2, 100);
    cout << "List After Update        : ";
    My_Db_Linked_List.Print_List();

    cout << "-----------------------------------------\n";

    cout << "Executing Clear() Operation...\n";
    My_Db_Linked_List.Clear();
    cout << "Elements Count Post-Clear: " << My_Db_Linked_List.Size() << endl;
    cout << "=========================================\n";

    return 0;
}