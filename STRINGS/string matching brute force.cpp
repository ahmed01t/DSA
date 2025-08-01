#include<iostream>
using namespace std;
int main(){
string s1;
string s2;
bool found;
cin>>s1;
cin>>s2;
int m=s1.size();
int n=s2.size();
for (int i=0;i<=m-n;i++){
    int first=i;
    int second=0;
    while (second<n){
        if (s1[first]!=s2[second]){
            break;
        }
        else {
            first++;
            second++;
        }
    }
        if(second==n){
            cout<<first-second;
            found=true;
            break;
        }
    }
    if (!found){
        cout<<"-1";
    }

}