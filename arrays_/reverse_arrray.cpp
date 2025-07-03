#include<iostream>
using namespace std;
int main() {
int arr[5]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int start=0;
int end=size-1;
while (start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
for (int i=0;i<size;i++){
    cout<<arr[i];
}
}