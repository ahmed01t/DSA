#include<iostream>
using namespace std;
void rotate_clockwise(string &str1 ){
char c=str1[str1.size()-1];
int index=str1.size()-2;
while(index>=0){
    str1[index+1]=str1[index];
    index--;
}
str1[0]=c;
}
void rotate_anticlockwise(string &str1){
char c=str1[0];
int index=1;
while (index<str1.size()){
    str1[index-1]=str1[index];
    index++;
}
str1[str1.size()-1]=c;
}
bool is_rotated(string str1,string str2){
string clockwise;
 string anticlockwise;
clockwise=str1;
rotate_clockwise(clockwise);
rotate_clockwise(clockwise);
if (clockwise==str2){
    return 1;
}
anticlockwise=str1;
rotate_anticlockwise(anticlockwise);
rotate_anticlockwise(anticlockwise);
if (anticlockwise==str2){
    return 1;
}
return 0;
}
int main() {
string str1;
string str2;
cin>>str1;
cin>>str2;
 cout<<is_rotated(str1,str2);
}