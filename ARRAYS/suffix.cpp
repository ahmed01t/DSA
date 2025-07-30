#include<iostream>
using namespace std;
int main() {
    int arr[6]={6,4,5,-3,2,8};
    int suffix[6];
    suffix[5]=arr[5];
    for (int i=4;i>=0;i--){
        suffix[i]=arr[i+1]+arr[i];
    }
    for(int i=0;i<6;i++){
        cout<<suffix[i]<<endl;
    }
    
}