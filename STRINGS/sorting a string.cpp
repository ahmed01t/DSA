#include<iostream>
using namespace std;
int main() {
    int alpha[26]={0};
    string s;
getline(cin,s);
    for (int i=0;i<s.size();i++){
    alpha[s[i]-'a']++;

    }
    string ans;
    for (int i=0;i<26;i++){
        char c='a'+i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
    }
    cout<<ans;
}