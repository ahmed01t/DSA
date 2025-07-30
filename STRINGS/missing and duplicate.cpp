#include<iostream>
using namespace std;
int main() {
    int arr[7];
int n=7;
for (int i=0;i<7;i++){
    cin>>arr[i];
}//decreasing values of array by-1
for (int i=0;i<n;i++){
    arr[i]--;
}
for (int i=0;i<n;i++){
    arr[arr[i]%n]+=n;

}
//missing find
for (int i=0;i<n;i++){
    if(arr[i]/n==0){
        cout<<"missing found"<<i+1<<endl;
        break;
    }
}
//repeating found
for (int i=0;i<n;i++){
    if (arr[i]/n==2){
        cout<<"repeated element is "<<i+1<<endl;
        break;
    }
}
}