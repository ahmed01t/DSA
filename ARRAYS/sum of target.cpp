#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
    int x=6;
    int tp=0;
    for (int i=0;i<6;i++){
        for (int j=i+1;j<=6;j++){
            if (arr[i]+arr[j]==x){
               tp++;
               cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    cout<<tp;
}