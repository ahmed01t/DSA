#include<iostream>
using namespace std;
int check( string str,int n){
    if (n==-1){
        return 0;
    }
    if (str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'){
        return 1+check(str,n-1);
    }
    else{
       return check(str,n-1);
    }
}
int main() {
    string str;
    cin>>str;
    int n=str.size()-1;
    cout<<check(str,n);
}