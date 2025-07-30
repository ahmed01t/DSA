#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    int ans;
    int x;
    cout<<"enter target value ";
    cin>>x;
    cout<<"enter array elements"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //bubble sort
    for (int i=n-2;i>=0;i--){
        for (int j=0;j<=i;j++){
if (arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
}
        }
    }
    for (int i=0;i<n-2;i++){
ans=x-arr[i];
int start=i+1;
int end=n-1;
while (start<end){
    if (arr[start]+arr[end]==ans){
        cout<<"target achieved";
    break;
    }
    else if (arr[start]+arr[end]>x){
        end--;
    }
    else {
        start++;
    }
}
    }
    return 0;

}