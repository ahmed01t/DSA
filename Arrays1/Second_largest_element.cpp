#include<iostream>
using namespace std;
int main(){
    int arr[7]={2,4,6,3,8,5,1};
    int largest=arr[0];
    for(int i=1;i<7;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
  int smax=arr[0];
  for(int i=0;i<7;i++){
    if(arr[i]!=largest){
        smax=max(arr[i],smax);
    }
  }
  cout<<" second largest element is"<<smax<<endl;
}