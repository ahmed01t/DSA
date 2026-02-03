#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"enter size of array\n";
cin>>n;
int arr[n];
for(int i=0;i<n-1;i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<n-1;i++){
    sum+=arr[i];
}
int ans=n*(n+1)/2;
cout<<ans-sum;

}