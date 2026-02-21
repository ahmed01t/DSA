#include<iostream>
using namespace std;
void print(int arr[],int n,int index){
if (index==n){
return;
}
cout<<arr[index];
print(arr,n,index+1);
}

int main(){
    int index=0;
    int n;
    int arr[1000];
cin>>n;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
print(arr,n,index);
}