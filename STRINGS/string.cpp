#include<iostream>
using namespace std;
int main() {
//string str="ahmed";
//string str2="tanveer";
//string s3;
//s3=str+str2;
//cout<<s3;
//ESCAPE CHARACTER 
string str1="Ahmed is a \"good\" boy";
cout<<str1<<endl;
// REVERSE A STRING 
string str ="Ahmed";
int start=0;
int end=str.size()-1;
while (start<=end){
    swap(str[start],str[end]);
    start++;
    end--;
}
cout<<str<<endl;
// calculate size of string without built in function
string str="ahmed";
int size=0;
while(str[size]!='\0'){
    size++;

}
cout<<str;
}