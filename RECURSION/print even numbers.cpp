#include<iostream>
using namespace std;
void print(int n){
    //base case
    if (n==2){
        cout<<"2";
        return;
    }
    cout<<n;
    print(n-2);
}
int main(){
    int n;
    cin>>n;
print(n);
}