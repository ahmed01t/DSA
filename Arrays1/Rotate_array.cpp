#include<iostream>
#include"vectorclass.cpp"
using namespace std;
void rotateVectorKtimes(Vector<int>&nums,int n,int k,Vector<int>&answer){
    for(int i=0;i<n;i++){
        answer.push_Back(0);
    }
for(int i=0;i<n;i++){
answer.toset(((i+k)%n),nums.toget(i));
}
answer.display();
}
int main(){
Vector<int>nums;
nums.push_Back(1);
nums.push_Back(2);
nums.push_Back(3);
nums.push_Back(4);
nums.push_Back(5);
Vector<int>answer;
rotateVectorKtimes(nums,5,3,answer);
}