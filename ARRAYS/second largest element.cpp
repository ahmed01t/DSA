#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int max=INT_MIN;
    int smax=INT_MIN;
  int arr[5]={1,2,3,4,5};
for (int i=0;i<5;i++){
    if (max<arr[i]){
        smax=max;
        max=arr[i];
    }
}
cout<<max;
}