#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,6,11,2,8};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum element is"<<max<<endl;
}