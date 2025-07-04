#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
    int brr[6];
    for (int i=0;i<6;i++){
        brr[i]=arr[5-i];
    }
   for (int i=0;i<6;i++){
    cout<<brr[i];
   }
}