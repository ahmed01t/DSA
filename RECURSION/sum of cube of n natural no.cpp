#include<iostream>
using namespace std;
int sq_cube( int n){
    if (n==1){
        return 1;
    }
    return n*n*n+sq_cube(n-1);
}
int main() {
    int n;
    cin>>n;
cout<<sq_cube(n);
}