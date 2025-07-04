#include<iostream>
#include<limits>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
int i=0;
int j=5;
while (i<=j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for (int i=0;i<6;i++){
    cout<<arr[i];
}



}