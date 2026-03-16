#include<iostream>
using namespace std;
class dequeue{
int front;
int rear;
int size;
int *arr;
public:
dequeue(int n){
    size=n;
    front =-1;
    rear=-1;
    arr =new int[n];
}

bool is_empty(){
    return front ==-1;
}
 
bool is_full(){
    return (rear+1)%size==front;
}

void push_front(int x){
if(is_empty()){
    front=rear=0;
    arr[0]=x;
    return;
}
else if(is_full()){
    return;
}
else{
    front=(front-1+size)%size;
    arr[front]=x;
}

}
void push_back(int x){
    if(is_empty()){
        front=rear=0;
        arr[0]=x;
        return;
    }
    else if(is_full()){
        return;
    }
    else{
        rear=(rear+1)%size;
        arr[rear]=x;
    }
}

void pop_front(){
    if(is_empty()){
        return;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%size;
    }
}

void pop_back(){
    if(is_empty()){
        return;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        rear=(rear-1+size)%size;
    }
}

};
int main(){

}

// stack and queue using dequeue