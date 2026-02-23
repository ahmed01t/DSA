#include<iostream>
using namespace std;
//only passing 1 argument  
void print( int n){
    if (n==1){
        cout<<"1"<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;

}
int main() {
    int n;
    cin>>n;
    print(n);
}