#include<iostream>
#include<algorithm>
using namespace std;
bool check( int num,int i=2){
if (num<2){
    cout<<"enter number 2 or greater than 2"<<endl;
}
if (num==2){
return true;
}
if (num%i==0){
    return false;
}
if (i*i>num){
    return true;
}
return check(num,i+1);
}
int main() {
    int num;
    cin>>num;
    cout<<check(num);
}
