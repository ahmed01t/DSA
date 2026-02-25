#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=9;
int arr[9]={8,6,4,7,4,9,10,8,12};
vector<int>ans(n,-1);
for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
        if(arr[j]<arr[i]){   // for smallest and largest
            
            ans[i]=arr[j];
            break;
        }
           }
}
for(auto it :ans){
    cout<<it<<" ";
}
}