#include<iostream>
using namespace std;
int main() {
    int rows=4;
    int cols=4;
    int arr[rows][cols];
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for( int j=0;j<cols;j++){
        int start=0;
        int end=cols-1;
        while (start<=end){
            swap(arr[start][j],arr[end][j]);
            start++;
            end--;
        }
    }
    for (int i=0;i<rows;i++){
        int start=0;
        int end=cols-1;
        while (start<=end){
swap(arr[i][start],arr[i][end]);
start++;
end--;
        }
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
