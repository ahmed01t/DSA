#include <iostream>
// #include <list>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int s, Node *n = nullptr)
    {
        data = s;
        next = n;
    }
};
// void iteratelinkedlist()
// {
// }

class LinkedList
{
public:
    Node *head;
    int size;
    LinkedList()
    {
        size = 0;
        head = nullptr;
    }

    void insertAtHead(int val)
    {
        // Node* temp = new Node(val);
        // temp->next = head;
        // head = temp;

        head = new Node(val, head);
        size++;
    }
    void insertInMiddle(int val, int valueafter)
    {
        Node *temp;
        temp = head;
        while (temp != nullptr && temp->data == valueafter)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp;
        temp = newNode;
        size++;
    }
    void insertAtEnd(int val)
    {
        Node *temp;
        temp = head;
        Node *newnode = new Node(val);
        if (size == 0)
        {
            head = newnode;
            size++;
            return;
        }

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void removeelementatstart()
    {

        if (size == 0)
        {
            cout << "YOUR LIST HAS 0 NODES " << endl;
            return;
        }

        Node *temp = head;
        temp = temp->next;
        delete head;
        head = temp;
        size--;
    }
    void removeatlast()
    {

        if (size == 0)
        {
            cout << "YOUR LIST HAS 0 NODES " << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            size--;
            return;
        }
        Node *temp = head;
        Node *parent = head;
        while (temp->next != nullptr)
        {
            parent = temp;
            temp = temp->next;
        }
        delete temp;
        parent->next = nullptr;
        size--;
    }
    void removenthenode(int a)
    {
        if (a > size)
        {
            cout << "THE ENTERED NODE IS GREATER THAN SIZE OF LIST";
            return;
        }

        int size1 = size - a;
        Node *temp = head;
        Node *prev = nullptr;
        while (size1 != 0)
        {
            prev = temp;
            temp = temp->next;
            size1--;
        }
        prev->next = temp->next;
        delete temp;
        size--;
    }
    void removeeverykthelement(int n)
    {
        Node *current = head;
        Node *prev = nullptr;
        int count = 1;
        if (n == 1)
        {
            cout << "1 IS NOT VALID";
            return;
        }

        while (current)
        {

            if (count == n)
            {
                prev->next = current->next;
                delete current;
                current = prev->next;
                count = 1;
            }
            else
            {
                prev = current;
                current = current->next;
                count++;
            }
        }
    }
    void removespecificvalue(int n)
    {
        if (size == 0)
        {
            cout << "THE LIST IS EMPTY.";
            return;
        }

        if (head->data == n)
        {
            removeelementatstart();
            return;
        }

        Node *temp = head;
        Node *previous = nullptr;

        while (temp != nullptr && temp->data != n)
        {
            previous = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "NO SUCH VALUE EXIST.";
            return;
        }

        previous->next = temp->next;
        delete temp;
        size--;
    }
    void reverseonlyvalues()
    {
        if (head == nullptr)
        {
            cout << "THE LIST IS EMPTY";
            return;
        }
        Node *temp = head;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = temp->data;
            temp = temp->next;
        }
        temp = head;
        for (int i = size - 1; i >= 0; i--)
        {
            temp->data = arr[i];
            temp = temp->next;
        }
        delete[] arr;
    }
    void reverseactuallist()
    {
        Node *curr = head;
        Node *prev = nullptr;
        Node *next = nullptr;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    Node *middleoflistusingsize()
    {
        if (head == nullptr)
        {
            cout << "LIST IS EMPTY";
            return nullptr;
        }

        Node *temp = head;
        int size1 = size / 2;
        for (int i = 0; i < size1; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
    Node *middleoflistusingpointers()
    {
        Node *fast = head;
        Node *slow = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    void rotatelinkedlist(int n)
    {
        if (head == nullptr || n <= 0)
            return;

        while (n--)
        {
            Node *curr = head;
            Node *prev = nullptr;

            while (curr->next != nullptr)
            {
                prev = curr;
                curr = curr->next;
            }

            if (prev == nullptr)
                return;

            prev->next = nullptr;
            curr->next = head;
            head = curr;
        }
    }
};

int main()
{

    LinkedList l1;

    return 0;
}