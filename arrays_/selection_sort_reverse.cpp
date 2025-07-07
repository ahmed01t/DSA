#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int arr[6]={10,4,3,8,2,1};
    for (int i=0;i<5;i++){
    
        for (int j=0;j<6-i-1;j++){
if (arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
}
        }
    }
    for (int i=0;i<6;i++){
        cout<<arr[i];
    }

}