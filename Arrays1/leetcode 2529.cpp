#include<iostream>
using namespace std;
int main(){
    int nums[6] = {-2,-1,-1,-1,2,3};
    int neg=0;
    int n=6;
    int pos=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            neg++;
        }
        else{
            pos++;
        }
    }
    if(neg>pos){
        cout<<neg;
    }
    else{
        cout<<pos;
    }

}