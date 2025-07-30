#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }    
    int last=arr[n-1];

    for (int i=n-2;i>=0;i--){
  arr[i+1]=arr[i];
 arr[0]=last;
    }
    for (int i=0;i<=n-1;i++){
        cout<<arr[i];
    }
}