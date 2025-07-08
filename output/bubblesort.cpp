#include<iostream>
using namespace std;
int main(){
    int arr[7]={8,7,9,5,6,4,1};
    for (int j=0;j<6;j++){
        if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    for (int i=0;i<7;i++){
        cout<<arr[i];
    }
}
//sab sa bhara element last pa la ka jana ka tariqa 