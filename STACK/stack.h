#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
template <typename T>
class stack {
    T *arr;
    int size;
    int top;
public:
stack(){
    size=100;
    top=-1;
    arr=new T[size];
}
    stack(int s) {
        size = s;
        top = -1;
        arr = new T[size];
    }
    void push(T x) {
        if (top == size - 1) {
            cout << "stack is full\n";
        } else {
            arr[++top] = x;
            cout << "value " << x << " pushed\n";
        }
    }
   void pop() {
    if (top == -1) {
        cout << "stack underflow\n";
    } else {
        top--;
    }
}
    T peek() {
        if (top == -1) {
            cout << "stack is empty\n";
            return T();   
        }
        return arr[top];
    }

    bool is_empty() {
        return top == -1;
    }

    int is_size() {
        return top + 1;
    }

    ~stack() {
        delete[] arr;
    }
};

#endif    