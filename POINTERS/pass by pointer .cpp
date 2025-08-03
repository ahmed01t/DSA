#include<iostream>
using namespace std;
void increment(int *ptr){
    *ptr=*ptr+1;
}
int main() {
    int num=10;
increment(&num);
cout<<num;
}