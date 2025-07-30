#include<iostream>
using namespace std;//first and last index finding
int first_index(int arr[],int target,int n){
int start=0;
int end=n-1;
int mid;
int first=-1;

while(start<=end){
    mid=start+(end-start)/2;
    if (arr[mid]==target){
        first=mid;
        end=mid-1;
    }
    else if (arr[mid]<target){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
}
return first;
}
int second_index(int arr[],int target,int n){
int start=0;
 int end=n-1;
 int last=-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if (arr[mid]==target){
        last=mid;
        end=mid-1;
        
    }
    else if (arr[mid]<target){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
}
return last;
}
int main() {
    int arr[1000];
    int n;
    int target;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter target value"<<endl;
cin>>target;
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int first=first_index(arr,target,n);
int second=second_index(arr,target,n);
if (first==-1){
    cout<<"target not found"<<endl;
}
else{
    cout<<"first index "<<first <<"second index "<<second<<endl;

}
}