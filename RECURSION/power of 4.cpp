#include<iostream>
#include<math.h>
using namespace std;
int power( int num,int n){
    if (n==1){
        return num;
    }
    if (n==0){
        cout<<"1"<<endl;
    }
    return num*pow(num,n-1);
}
int main() {
    int num,n;
    cout<<"enter number"<<endl;
    cin>>num;
    cout<<"enter power"<<endl;
    cin>>n;
cout<<power(num,n);
}