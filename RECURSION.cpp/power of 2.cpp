#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
int power(int num,int n){
    if (n==1){
        return num;
    }
    return num*pow(num,n-1);
}
int main() {
    int num,n;
    cout<<"enter power"<<endl;
    cin>>n;
    cout<<"enter number"<<endl;
    cin>>num;
    if (n==0){
        cout<<"1"<<endl;
        return 0;
    }
    cout<<power(num,n);
}