//Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it.
// If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void lpsfind(vector<int>&lps,string s){ 
int pre=0;
int suff=1;
while(suff<s.size()){
    if (s[pre]==s[suff]){
        lps[suff]=1;
        suff++;
        pre++;
    }
    else {
        if (pre==0){
            lps[suff]=0;
            suff++;
        }
        else {
            pre=lps[pre-1];
        }
    }

}
} 
int kmp_match(string a,string b){
vector<int>lps(b.size(),0);
lpsfind(lps,b);
int first=0;
int second=0;
while (first<a.size()&&second<b.size()){
    if (a[first]==b[second]){
        first++;
        second++;
    }
    else {
        if (second==0){
            first++;
        }
        else {
            second=lps[second-1];
        }
    }
    if(second==b.size()){
        return 1;
    }
}
return 0;
}

using namespace std;
int main() {
    string a;
    string b;
    cout<<"enter string "<<endl;
    cin>>a;
    cin>>b;
    if (a==b){
        cout<<" string matched"<<endl;
        return 0;
    }
    int repeat=1;
    string temp=a;
    while (temp.size()<b.size()){
        temp+=a;
        repeat++;
    }
    // kmp pattern search
    if (kmp_match(temp,b)==1){
        cout<<repeat<<endl;
    }
     else if (kmp_match(temp+a,b)==1){
        cout<<repeat+1<<endl;
    }
    else {
        cout<<"not found"<<endl;
    }
}