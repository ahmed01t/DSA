#include <iostream>
#include <cstdint>   // for uintptr_t
using namespace std;

class Node {
public:
    int data;
    Node* npx;   // XOR of previous and next node addresses

    Node(int val) {
        data = val;
        npx = nullptr;
    }
};

class XORLinkedList {
private:
    Node* head;
    Node* tail;

    // XOR helper function for pointers
    Node* XOR(Node* a, Node* b) {
        return reinterpret_cast<Node*>(
            reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b)
        );
    }

public:
    XORLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at beginning
    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        // newNode's npx = NULL XOR current head
        newNode->npx = XOR(nullptr, head);

        if (head != nullptr) {
            // old head's next was head->npx XOR NULL
            Node* next = XOR(nullptr, head->npx);

            // old head's new npx = newNode XOR next
            head->npx = XOR(newNode, next);
        } else {
            // list was empty, so tail also becomes new node
            tail = newNode;
        }

        head = newNode;
    }

    // Insert at end
    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (tail == nullptr) {
            // empty list
            head = tail = newNode;
            return;
        }

        // new node's npx = old tail XOR NULL
        newNode->npx = XOR(tail, nullptr);

        // previous of tail = tail->npx XOR NULL
        Node* prev = XOR(tail->npx, nullptr);

        // old tail's new npx = prev XOR newNode
        tail->npx = XOR(prev, newNode);

        tail = newNode;
    }

    // Remove from beginning
    int removeAtHead() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return -1;
        }

        Node* oldHead = head;
        int value = oldHead->data;

        // next = NULL XOR oldHead->npx
        Node* next = XOR(nullptr, oldHead->npx);

        if (next != nullptr) {
            // next node's next = oldHead XOR next->npx
            Node* nextNext = XOR(oldHead, next->npx);

            // new head has no previous, so previous = NULL
            next->npx = XOR(nullptr, nextNext);

            head = next;
        } else {
            // only one node existed
            head = tail = nullptr;
        }

        delete oldHead;
        return value;
    }

    // Remove from end
    int removeAtTail() {
        if (tail == nullptr) {
            cout << "List is empty\n";
            return -1;
        }

        Node* oldTail = tail;
        int value = oldTail->data;

        // previous = oldTail->npx XOR NULL
        Node* prev = XOR(oldTail->npx, nullptr);

        if (prev != nullptr) {
            // prevPrev = prev->npx XOR oldTail
            Node* prevPrev = XOR(prev->npx, oldTail);

            // new tail has no next, so next = NULL
            prev->npx = XOR(prevPrev, nullptr);

            tail = prev;
        } else {
            // only one node existed
            head = tail = nullptr;
        }

        delete oldTail;
        return value;
    }

    // Search for a value
    bool search(int key) {
        Node* curr = head;
        Node* prev = nullptr;

        while (curr != nullptr) {
            if (curr->data == key) {
                return true;
            }

            Node* next = XOR(prev, curr->npx);
            prev = curr;
            curr = next;
        }

        return false;
    }

    // Print the list
    void print() {
        Node* curr = head;
        Node* prev = nullptr;

        while (curr != nullptr) {
            cout << curr->data << " ";
            Node* next = XOR(prev, curr->npx);
            prev = curr;
            curr = next;
        }
        cout << endl;
    }

    // Destructor: free all nodes
    ~XORLinkedList() {
        Node* curr = head;
        Node* prev = nullptr;

        while (curr != nullptr) {
            Node* next = XOR(prev, curr->npx);
            delete prev;
            prev = curr;
            curr = next;
        }

        delete prev;  // delete last node
    }
};

// Example use
int main() {
    XORLinkedList list;

    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtTail(30);
    list.insertAtTail(40);

    cout << "List: ";
    list.print();

    cout << "Search 30: " << (list.search(30) ? "Found" : "Not Found") << endl;

    cout << "Removed head: " << list.removeAtHead() << endl;
    cout << "Removed tail: " << list.removeAtTail() << endl;

    cout << "List after removals: ";
    list.print();

    return 0;
}