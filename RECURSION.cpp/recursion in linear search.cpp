#include<iostream>
using namespace std;
bool print(int arr[],int x,int index,int n){
    if (index==n){
        return 0;
    }
    if (arr[index]==x){
        return 1;
    }
    return print(arr,x,index+1,n);
}
int main() {
    int x;
    cout<<"enter target"<<endl;
    cin>>x;
    int index=0;
    int n;
    int arr[1000];
cin>>n;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<print(arr,x,index,n);
}