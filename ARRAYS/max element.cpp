#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,2,3,0,5};
int ans=INT16_MAX;
for (int i=0;i<5;i++){
    if (arr[i]<ans){
        ans=arr[i];
    }
}
 cout<<ans;
}