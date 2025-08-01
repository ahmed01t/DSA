#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    string rev=str;
    reverse(rev.begin(),rev.end());
    int size=str.size();
    str+='$';
str+=rev;
int n=str.size();
vector<int>lps(n,0);
int prefix=0;
int suffix=1;
while(suffix<str.size()){
if (str[prefix]==str[suffix]){
    lps[suffix]=prefix+1;
    suffix++;
    prefix++;
}
else {
    if(prefix==0){
suffix++;
    }
    else {
        prefix=lps[prefix-1];
    }
}
}
    cout<<size-lps[n-1];

}