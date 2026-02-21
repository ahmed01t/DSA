#include<iostream>
using namespace std;
int sum(int arr[],int index,int n){
    if (index==n){
        return 0;
    }
    return arr[index]+sum(arr,index+1,n);
}
int main(){
    int arr[1000];
    int n;
    int index=0;
    cout<<"enter size of array"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<sum(arr,index,n);
}