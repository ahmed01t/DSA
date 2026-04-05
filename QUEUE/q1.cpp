#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1={1,2,2,3,4};
    int x=2;
    vector<int>v2;
    for(int i=0;i<v1.size();i++){
        if(v1[i]!=x){
            v2.push_back(v1[i]);
        }
        else{
        v1.erase(v1.begin()+i);
        }
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";

    }
}
