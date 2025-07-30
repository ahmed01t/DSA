#include<iostream>
#include<limits>
using namespace std;
int main() {
    int arr[5]={1,2,3,-2,5};
    int maxi=-1;//assign int_min or -1 for smallest value 
    int prefix=0;
    
    for (int i=0;i<5;i++){
prefix+=arr[i];
maxi=max(maxi,prefix);
if (prefix<0){
    prefix=0;
}
    }
    cout<<maxi;
}
