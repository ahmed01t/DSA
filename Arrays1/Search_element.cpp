#include<iostream>
using namespace std;
int main(){
    int arr[6]={10,20,7,11,8,4};
    int k;
    cout<<" enter element to search\n";
    cin>>k;
    bool flag;
    for(int i=0;i<6;i++){
        if(arr[i]==k){
            cout<<" element found at index"<<i<<endl;
            flag=true;
        }
    }
    if(flag==false){
        cout<<" not found\n";
    }
}