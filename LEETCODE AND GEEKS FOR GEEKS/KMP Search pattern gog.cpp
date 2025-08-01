//Given two strings, one is a text string txt and the other is a pattern string pat.
// The task is to print the indexes of all the occurrences of the pattern string in the text string.
// Use 0-based indexing while returning the indices.
//Note: Return an empty list in case of no occurrences of pattern
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void lps_find(vector<int>&lps,string s){
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
int main() {
string str1;
string str2;
cin>>str1;
cin>>str2;
vector<int>lps(str2.size(),0);
lps_find(lps,str2);
vector<int>result;
int first=0;
int second=0;
while(first<str1.size()&&second<str2.size()){
    if (str1[first]==str2[second]){
        first++;
        second++;
    }
    else{
        if (second==0){
            first++;
        }
        else {
            second=lps[second-1];
        }
    }
    if (second==str2.size()){
        result.push_back(first-second);
second=lps[second-1];
    }
}
for (int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
cout<<endl;
}
