#include<iostream>
using namespace std;
bool check(int arr[],int x,int start,int end){
    if (start>end){
        return 0;
    }
int mid=start+(end-start)/2;
if (arr[mid]==x){
    return 1;
}
else if (arr[mid]<x){
    return check(arr,x,mid+1,end);
}
else {
    return check(arr,x,start,mid-1);
}
}
int main(){
     int x;
    cout<<"enter target"<<endl;
    cin>>x;
    int start=0;
int n;
    int arr[1000];
cin>>n;
int end=n-1;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<check(arr,x,start,end);
}