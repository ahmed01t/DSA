#include<iostream>
using namespace std;
class queue{
int *arr;
int front;
int rear;
int size;
public:
queue(int n){
    arr=new int[n];
    front=-1;
    rear=-1;
    size=n;
}

bool is_empty(){
    return front==-1;
}

bool is_full(){
    return rear==size-1;
}

void push(int x){
    if(is_empty()){
        front=rear=0;
        arr[0]=x;
    }
    else if( is_full()){
        cout<<" queue overflow\n";
    }
    else{
        rear=rear+1;
        arr[rear]=x;
    }
}

void pop(){
    if(is_empty()){
        cout<<" queue undereflow\n";
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
    }
}

int start(){
    if(is_empty()){
        cout<<" queue is empty\n";
    }
    else{
        return arr[front];
    }
}
};
int main(){
queue q(5);
q.push(3);
q.push(2);
q.push(6);
q.push(4);
q.push(8);
cout<<q.start();
}