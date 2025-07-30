#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;
int main(){
    int sum=0;
    int arr[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<4;i++){
        int start=0;
        int end=3;
        while(start<=end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout<<arr[i][j]<<endl;
        }
    }
}