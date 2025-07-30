#include<iostream>
using namespace std;
int main() {
    int stalls[5]={1,2,4,8,9};
    int k=3;
    int mid;
    int ans;
    int start=1;
    int end=stalls[5-1]-stalls[0];
    while (start<=end){
        mid=start+(end-start)/2;
        int count=1;
        int position=stalls[0];
        for (int i=1;i<5;i++){
            if (position+mid<=stalls[i]){
count++;
position=stalls[i];
            }
        }
if (count<k){
    end=mid-1;
}
else{
    ans=mid;
    start=mid+1;
}

            }
            cout<<ans;
        }
