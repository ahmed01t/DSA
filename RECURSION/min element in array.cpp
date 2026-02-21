#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int min_(int arr[],int index,int n){
    if (index==n-1){
        return arr[index];
    }
    return min(arr[index],min_(arr,index+1,n));
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
cout<<min_(arr,index,n);
}