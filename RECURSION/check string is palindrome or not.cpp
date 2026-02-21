#include<iostream>
using namespace std;
bool check( string str,int start,int end){
if (start>=end){
    return 1;
}
if (str[start]!=str[end]){
    return 0;
}
return check(str,start+1,end-1);
}
int main(){
 string str;
 cin>>str;
 int start=0;
 int end=str.size()-1;
 cout<<check(str,start,end);
}