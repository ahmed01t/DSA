#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,6,11,2,8};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"minimum element is"<<min<<endl;
}