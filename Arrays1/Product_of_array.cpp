#include<iostream>
#include"vectorclass.cpp"
void productexceptitself(Vector<int>nums, int n,Vector<int>answer ){
for(int i=0;i<nums.getSize();i++){
    int temp=1;
    for(int j=0;j<nums.getSize();j++){
        if(j!=i){
            temp*=nums.toget(j);
        }
    }
    answer.push_Back(temp);
}
answer.display();
}
using namespace std;
int main(){
Vector<int>nums;
nums.push_Back(1);
nums.push_Back(2);
nums.push_Back(3);
nums.push_Back(4);
Vector<int>ans;
productexceptitself(nums,4,ans);
}