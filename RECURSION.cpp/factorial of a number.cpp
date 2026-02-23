#include<iostream>
using namespace std;
long long factorial( int n){
    if (n==1||n==0){
     return 1;
    }
    return n*factorial(n-1);
}
int main() {
    long long n;
    cout<<"enter number "<<endl;
    cin>>n;
    if (n<0){
        cout<<"factorial not possible"<<endl;
        return 0;
    }
cout<<factorial(n);
}