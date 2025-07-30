#include<iostream>
#include<limits>
using namespace std;
int main() {
    int piles[4]={3,6,7,11};
    int start=0;
    int end=0;
    int mid;
    int h=8;
    int ans;
    long long sum=0;
    for (int i=0;i<4;i++){
        sum=sum+piles[i];
end=max(end,piles[i]);
}
start=sum/h;
if (!start){
    start=1;
}
while (start<=end){
    mid=start+(end-start)/2;
 int total_time=0;
 for (int i=0;i<4;i++){
    total_time=total_time+piles[i]/mid;
    if (piles[i]%mid){
        total_time++;
    }
 }   
 if (total_time>h){
    start=mid+1;
 }
 else{
    ans=mid;
    end=mid-1;
 }
}
cout<<ans;
}