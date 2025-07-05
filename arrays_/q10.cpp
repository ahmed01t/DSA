#include<iostream>
using namespace std;
int is_prime( int n) {
int prime;
if (n<2){
    prime=0;
    for (int i=2;i<n;i++){
        if (n%i==0){
            prime=1 ;
        }
    }
    
}
if (prime==1){
    cout<<"prime number ";
}
}

int main() {
    int n;
    cin>>n;
    is_prime(n);
}