#include <iostream>
#include <cstdint>
using namespace std;

class Node {
public:
    int data;
    Node* npx;

    Node(int value) {
        data = value;
        npx = nullptr;
    }
};

class XOR_list {
public:
    Node* head;
    Node* tail;

    Node* XOR(Node* a, Node* b) {
        return reinterpret_cast<Node*>(
            reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b)
        );
    }

    XOR_list() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->npx = XOR(nullptr, head);

            // FIXED LINE
            Node* next = XOR(nullptr, head->npx);

            head->npx = XOR(newNode, next);
            head = newNode;
        }
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            newNode->npx = XOR(tail, nullptr);

            Node* prev = XOR(tail->npx, nullptr);
            tail->npx = XOR(prev, newNode);

            tail = newNode;
        }
    }

    int removeAtHead() {
        if (head == nullptr) {
            cout << "List empty\n";
            return -1;
        }

        Node* oldHead = head;
        int value = oldHead->data;

        Node* next = XOR(nullptr, oldHead->npx);

        if (next == nullptr) {
            head = tail = nullptr;
        } else {
            Node* nextNext = XOR(oldHead, next->npx);
            next->npx = XOR(nullptr, nextNext);
            head = next;
        }

        delete oldHead;
        return value;
    }

    int removeAtTail() {
        if (tail == nullptr) {
            cout << "List is empty\n";
            return -1;
        }

        Node* oldTail = tail;
        int value = oldTail->data;

        Node* prev = XOR(oldTail->npx, nullptr);

        if (prev == nullptr) {
            head = tail = nullptr;
        } else {
            Node* prevPrev = XOR(prev->npx, oldTail);
            prev->npx = XOR(prevPrev, nullptr);
            tail = prev;
        }

        delete oldTail;
        return value;
    }

    bool search(int key) {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->data == key) {
                return true;
            }

            Node* next = XOR(prev, current->npx);
            prev = current;
            current = next;
        }

        return false;
    }

    void print() {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            cout << current->data << " ";
            Node* next = XOR(prev, current->npx);
            prev = current;
            current = next;
        }
        cout << endl;
    }

    ~XOR_list() {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            Node* next = XOR(prev, current->npx);
            delete prev;
            prev = current;
            current = next;
        }

        delete prev;
    }
};

int main() {
    XOR_list list;

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