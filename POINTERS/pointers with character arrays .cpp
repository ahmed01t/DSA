#include<iostream>
using namespace std;
int main() {
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<(void*)ptr<<endl;
}