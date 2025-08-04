#include<iostream>
using namespace std;
int main() {
    int n=10;
    int *p=&n;
    int **p2=&p;
    int ***p3=&p2;
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<&p<<endl;
cout<<&p2<<endl;
// modifying values of n
**p2=**p2+5;
cout<<n;

}