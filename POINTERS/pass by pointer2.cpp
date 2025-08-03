#include<iostream>
using namespace std;
void mult(int *p){
    for (int i=0;i<5;i++){
        p[i]=2*p[i];
    }
}
int main() {
    int arr[5]={1,2,3,4,5};
    mult(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}