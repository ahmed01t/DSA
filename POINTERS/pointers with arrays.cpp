#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    cout<<arr<<endl;
    cout<<*(arr+1)<<endl;
    //printing all values
for (int i=0;i<5;i++){
    cout<<*(arr+i)<<endl;
}
//printing all addresses 
for (int i=0;i<5;i++){
    cout<<(arr+i)<<endl;
}
cout<<ptr<<endl;
//print address of second element
cout<<(arr+1)<<endl;
cout<<&arr[1]<<endl;
//arithmetic operations printing all the values
for (int i=0;i<5;i++){
    cout<<*ptr<<endl;
    ptr++;
}
ptr=ptr+3;
cout<<*ptr<<endl;
}