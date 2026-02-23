
#include<iostream>
using namespace std;

template<class T>
class Vector {
    T* arr;
    int size;
    int capacity;

public:
    Vector(int cap) {
        capacity = cap;
        size = 0;
        arr = new T[capacity];
    }

    void push_back(T x) {
        if (size == capacity) {
            expand();
        }
        arr[size++] = x;
    }

    void pop() {
        if (size > 0)
            size--;
    }

    T get_index(int index) {
        if (index >= 0 && index < size)
            return arr[index];
        return -1;
    }

    void set(int index, T value) {
        if (index >= 0 && index < size)
            arr[index] = value;
    }

    int length() {
        return size;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void expand() {
        capacity = capacity * 2;
        T* temp = new T[capacity];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
    }
};
void rotateVectorKTimes(Vector<int>&nums,int k){
int n=nums.length();
k=k%n;
for(int r=0;r<k;r++){
    int temp=nums.get_index(n-1);
    for(int i=n-2;i>=0;i--){
        nums.set(i+1,nums.get_index(i));
    }
    nums.set(0,temp);
}
}
int main(){
 Vector<int> v(6);

    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(11);
    v.push_back(5);
    v.push_back(8);

    rotateVectorKTimes(v, 2);
    v.display(); 
}