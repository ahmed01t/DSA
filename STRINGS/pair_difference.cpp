#include<iostream>
using namespace std;
int main() {
    int arr[6]={2,3,5,10,50,80};
    int start=0;
    int end=1;
    int n=6;
    int target=75;
//if target value is given in -ve  write if (target<0){target=target*-1;
    while (end<n){
        if (arr[end]-arr[start]==target){
            cout<<arr[start]<<" "<<arr[end]<<endl;
            break;
            
        }
        else if ( arr[end]-arr[start]<target){
            end++;

        }
        else { 
            start++;
        }
        if (start==end){
            end++;
        }
        }
}