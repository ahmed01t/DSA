#include<iostream>
using namespace std;
int binary_search(int arr[],int target,int n){
int start=0;
int end=n-1;
int mid;
int ans=-1;
while(start<=end){
    mid=start+(end-start)/2;
    if (arr[mid]==target){
        return mid;
    }
    else if (arr[mid]>=arr[0]){
        if (target>=arr[start]&&target<arr[mid]){
            end=mid-1;
        }// finding if element is present in left side
        else {
            start=mid+1;
        }
    }
    // right side part after mid
else {
    if (target>arr[mid]&&target<=arr[end]){
        start=mid+1;
// for right side part
    }
    else {
        end=mid-1;
    }
}
}
cout<<ans;
}
int main(){
    int arr[1000];
    int target;
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter target  value"<<endl;
    cin>>target;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<(binary_search(arr,target,n));
}