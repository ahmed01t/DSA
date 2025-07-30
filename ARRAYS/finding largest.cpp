#include<iostream>
using namespace std;
int main() {
    int arr[6]={3,9,2,4,1,7};
    int index=arr[0];
    for (int i=1;i<=5;i++){
if (arr[i]<arr[index]){
    index=i;
}
    }
cout<<arr[index]<<endl; 
    cout<<index;

}