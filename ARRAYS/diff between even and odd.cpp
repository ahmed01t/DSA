#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
    int sum=0;
    int sum2=0;
    for (int i=0;i<6;i++){
        if (i%2==0){
            sum=sum+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    int diff=sum-sum2;
    cout<<diff;
    
}
