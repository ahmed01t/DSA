#include<iostream>
using namespace std;
void swap(int *num1, int *num2){
int temp=*num1;
*num1=*num2;
*num2=temp;
cout<<&num1<<endl;
}
int main() {
    int first=10;
    int second=20;
swap(&first,&second);
cout<<first<<" "<<second<<endl;
}