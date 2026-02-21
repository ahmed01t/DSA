#include<iostream>
using namespace std;
void print(int n){
    if (n==2){
        cout<<"2"<<endl;
        return;
    }
    print(n-2);
    cout<<n<<endl;
}
int main() {
    int n;
    cin>>n;
    if (n%2==1){
        n--;
    }
    print (n);
}