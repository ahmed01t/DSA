#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }//decreasing array elemsts
    for (int i=0;i<n;i++){
        arr[i]--;
    }//taking mod and adding
for (int i=0;i<n;i++){
int index=arr[i]%8;
arr[index]+=8;
}
for (int i=0;i<n;i++){
 int fre=arr[i]/8;
 cout<<"element"<<(i+1)<<"occurs"<<fre<<"times"<<endl;
    
    }
}
