#include<iostream>
using namespace std;
void print(int n){
if (n==1){
    cout<<"coder army"<<endl;
    return;
}
cout<<"coder army"<<endl;
print(n-1);
}
int main() {
    int n=10;
    print(n);
}