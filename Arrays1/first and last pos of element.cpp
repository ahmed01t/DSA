#include<iostream>
using namespace std;
int main(){
    int nums[6]={5,7,7,8,8,10};
    int target=8;
    int first=-1;
    int last=-1;
    int start=0;
    int n=6;
    int end=n-1;
    int mid;
    while(start<=end){
         mid=start+(end-start)/2;
        if(nums[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
start=0;
end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<first<<" "<<last<<" "<<endl;
}