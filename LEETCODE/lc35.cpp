#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    int index=-1;//initialize index some value always outside while loop
    int target;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
  cout<<"enter target value"<<endl;
  cin>>target;
  int start=0;
  int end=n-1;
  while (start<=end){
 int mid=start+(end-start)/2;
 if (arr[mid]==target){
    index=mid;
    break;
 }
 else if (arr[mid]<target){
    start=mid+1;
 }
 else {
    index=mid;
    end=mid-1;
 }
  }
  cout<<index;
}