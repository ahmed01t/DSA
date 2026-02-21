#include<iostream>
using namespace std;
void check( string &str,int start,int end){
    if (start>=end){
        return ;
    }
    char c=str[start];
    str[start]=str[end];
    str[end]=c;
return check(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    int start=0;
    int end=str.size()-1;
check(str,start,end);
cout<<str;
}