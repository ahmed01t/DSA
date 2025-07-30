#include<iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int start=0;
    int end=str.size()-1;
    while(start<end){
        if (str[start]==str[end]){
            cout<<"it is palindrome"<<endl;
            break;
        }
        else {
            cout<<"not palindrome"<<endl;
            break;
        }
    start++;
    end--;
    }
}