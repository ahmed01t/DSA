#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;
int main(){
    int sum=0;
    int index=-1;
    int arr[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<4;i++){
int total=0;
for (int j=0;j<4;j++){
    total+=arr[i][j];
}
if (sum<total){
    sum=total;
    index=i;
}
    }
    cout<<index<<endl;
    cout<<sum<<endl;
}