#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
void setReal(int r){
    real=r;
}
void setImg(int i){
    img=i;
}
int getReal(){
    return real;
}
int getImg(){
    return img;
}
void display(){
    cout<<real<<" "<< "+"<<img<<"i"<<endl;
}
//
complex conjugate(){
    return complex(real,-img);
}
//
complex add(const complex& c){
    return (real+c.real,img+c.img);
}
//
complex subtract(const complex& c){
    return complex(real-c.real,img-c.img);
}
//
complex multiply(const complex& c){
int  r=real*c.real - img*c.img;
int i=real*c.img+img*c.real;
return complex(r,i); 
}

};
int main(){
complex c1(3,4);
complex c2(6,7);
complex sum=c1.add(c2);
sum.display();
complex diff=c1.subtract(c2);
}