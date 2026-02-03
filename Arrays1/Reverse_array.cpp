#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[6]={6,11,7,4,8,9};
    int rotated[n];
    for(int i=0;i<n;i++){
        rotated[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<rotated[i]<<" ";
    }

}