#include<iostream>
#include<vector>
using namespace std;
int main() {
int alpha[26]={0};
string sentence;
getline(cin,sentence);

for (int i=0;i<sentence.size();i++){
alpha[sentence[i]-'a']=1;
}
for (int i=0;i<26;i++){
    if (alpha[i]==0){
        cout<<"not panagram"<<endl;
        return 0;
    }
}
cout<<"panagram"<<endl;
}