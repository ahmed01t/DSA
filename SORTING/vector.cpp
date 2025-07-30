#include<iostream>
#include<vector>
using namespace std;
int main() {
    //create vector
    vector<int>v;
    vector<int>v1(5,1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    v1.push_back(8);
    cout<<"size of v :"<<v.size()<<endl;
    cout<<"capacity of v :"<<v.capacity()<<endl;
    cout<<"size of v1 :"<<v1.size()<<endl;
    cout<<"capacity of v1 :"<<v1.capacity()<<endl;
    //update value
    v[1]=5;
vector<int>v3={1,2,3,4,5};
cout<<"size of v3  :"<<v3.size()<<endl;
//delete value from vector
vector<int>v4;
v4.push_back(40);
v4.push_back(21);
v4.push_back(11);
 v4.push_back(81);
 v4.push_back(99);
 v4.pop_back();
 cout<<"size of v4 :"<<v4.size()<<endl;
    cout<<"capacity of v4 :"<<v4.capacity()<<endl;
    //remove element from middle
    v4.erase(v4.begin()+2);
    for (int i=0;i<v4.size();i++){
        cout<<v4[i]<<endl;
    }
    cout<<endl;
    //insert element at any index
    v4.insert(v4.begin()+1,43);
     for (int i=0;i<v4.size();i++){
        cout<<v4[i]<<endl;
    }
    v4.clear();//cleares everything in v4
    //no change in capacity  remove all elements only in size
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;
    cout<<endl;
     //copy value of one vector into another
     vector<int>a;
     a=arr;
  for (auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" "<<endl;
  }
  cout<<endl;

vector<int>v5;
v5.push_back(40);
v5.push_back(21);
v5.push_back(11);
 v5.push_back(81);
 v5.push_back(99);
 cout<<find(v5.begin(),v5.end(),11)-v5.begin()<<endl;
}