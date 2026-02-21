#include<iostream>
using namespace std;
void check( string &str,int in){
    if (in==-1){
        return ;
    }
    str[in]='A'+str[in]-'a';
    check(str,in-1);
}
int main(){
    string str;
    cin>>str;
    int in=str.size()-1;
    check(str,in);
    cout<<str;
}