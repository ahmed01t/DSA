#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string s;
    getline(cin,s);
vector<int>lps(s.size(),0);
int prefix=0;
int suffix=1;
while (suffix <s.size()){
    if (s[prefix]==s[suffix]){
        lps[suffix]=prefix+1;
        prefix++;
        suffix++;
    }
    // if prefix pointing 0th index
    else {
        if (prefix==0){
lps[suffix]=0;
suffix++;
        }
        else {
            prefix=lps[prefix-1];
        }
    }
}
cout<<lps[s.size()-1];
}