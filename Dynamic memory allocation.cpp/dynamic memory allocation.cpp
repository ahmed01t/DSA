#include<iostream>
using namespace std;
int main() {
    int *ptr=new int;
    *ptr=20;
    cout<<*ptr<<endl;
    // float type
    float *ptr2=new float;
    *ptr2=21.1;
    cout<<*ptr2<<endl;
    // arrays
    int n;
    cout<<"enter size for arrays"<<endl;
    cin>>n;
    int *p=new int[n];
    for (int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    delete ptr;
    delete ptr2;
    delete[] p; 
}
