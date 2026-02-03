#include<iostream>
using namespace std;
int main(){
int arr[8];
arr[0]=0;
arr[1]=1;
for(int i=2;i<8;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
for(int i=0;i<8;i++){
    cout<<arr[i]<<" "<<endl;
}
}