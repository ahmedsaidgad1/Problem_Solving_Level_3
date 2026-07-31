#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{
public:
    class Node
    {
    public:
        T value;
        Node *next;
        Node *prev;
    };

    Node *head = NULL;

    ~clsDblLinkedList()
    {
        Clear();
    }

    void Insert_At_Begeninning(T value)
    {
        Node *New_Node = new Node();
        New_Node->value = value;
        New_Node->prev = NULL;
        New_Node->next = head;

        if (head != NULL)
        {
            head->prev = New_Node;
        }
        head = New_Node;
    }

    Node *Find_Node(T value)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->value == value)
            {
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }

    void Insert_After(Node *curr, T value)
    {
        if (curr == NULL)
        {
            return;
        }

        Node *New_Node = new Node();
        New_Node->value = value;
        New_Node->prev = curr;
        New_Node->next = curr->next;

        if (curr->next != NULL)
        {
            curr->next->prev = New_Node;
        }
        curr->next = New_Node;
    }

    void Insert_At_End(T value)
    {
        Node *New_Node = new Node();
        New_Node->value = value;
        New_Node->next = NULL;

        if (head == NULL)
        {
            New_Node->prev = NULL;
            head = New_Node;
            return;
        }

        Node *last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = New_Node;
        New_Node->prev = last;
    }

    void Delete_Node(Node *Node_To_Delete)
    {
        if (head == NULL || Node_To_Delete == NULL)
        {
            return;
        }

        if (head == Node_To_Delete)
        {
            head = Node_To_Delete->next;
        }

        if (Node_To_Delete->next != NULL)
        {
            Node_To_Delete->next->prev = Node_To_Delete->prev;
        }

        if (Node_To_Delete->prev != NULL)
        {
            Node_To_Delete->prev->next = Node_To_Delete->next;
        }
        delete Node_To_Delete;
    }

    void Delete_First_Node()
    {
        if (head == NULL)
        {
            return;
        }

        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
    }

    void Delete_Last_Node()
    {
        if (head == NULL)
        {
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }

        Node *temp = curr->next;
        curr->next = NULL;
        delete temp;
    }

    int Size()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void Print_List()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void Clear()
    {
        while (head != NULL)
        {
            Delete_First_Node();
        }
    }

    bool Is_Empty()
    {
        return (head == NULL);
    }

    void Reverse()
    {
        Node *current = head;
        Node *temp = NULL;

        while (current != NULL)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != NULL)
        {
            head = temp->prev;
        }
    }

    Node *Get_Node(int index)
    {
        int count = 0;
        if (index < 0)
            return NULL;

        Node *current = head;
        while (current != NULL)
        {
            if (count == index)
            {
                break;
            }
            current = current->next;
            count++;
        }
        return current;
    }
};