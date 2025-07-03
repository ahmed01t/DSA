#include<iostream>
using namespace std;
int main() {
    int x;
    int  size;
    cin>>x;
    cin>>size;
    int arr[size];
    for (int i =0;i<size;i++){
        cin>>arr[i];
    }
for (int i=0;i<size;i++){
    if (arr[i]>x){
        cout<<arr[i]<<endl;
        break;
    }
    else{
        cout<<"no element is greater ";
        break;
    }
}
}