#include<iostream>
using namespace std;
int binary_search( int key,int arr[],int n){
int start=0;
int end=n-1;
int mid;
int ans;
while(start<=end){
    mid=start+(end-start)/2;
    if (arr[mid]==key){
    ans=mid;
    return ans;//we can also use break;
    }
    else if (arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
return -1;
}
int main() {
int arr[1000];
int n;
int key;
cout<<"enter array size"<<endl;
cin>>n;
for (int i=0;i<n;i++){
    cin>>arr[i];
}cout<<"enter key element "<<endl;
cin>>key;
int result=binary_search(key,arr,n);
if (result==-1){
    cout<<"element not present "<<endl;
}
else {
    cout<<"element fount at index"<<result<<endl;
}


}