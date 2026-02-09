# include<iostream>
using namespace std;
template<typename T>
class Vector{
private:
    int size;
    T *data;
    void resize(){T *temp=new T[size+1];
    for(int i=0;i<size;i++){
        temp[i]=data[i];
    }
    this->size++;
    delete [] data;
    data=temp;
    }
public:
    Vector(){size=0,data=nullptr;}
    int getSize()const{return this->size;}
    void push_Back(T value){
        resize();
        data[size-1]=value;
    }
    void pop_Back(){
        if(size>0)
        size--;
        else if(size==0)
        {
            cout<<"size is already zero\n";
        }
    }
    T max()const{
        if(size==0)
        {
            cout<<"Vector is empty!No maximum element";
            return T();
        }
        T maximum=data[0];
        for(int i=1;i<size;i++)
        {
            if(data[i]>=maximum)
            {
                maximum=data[i];
            }
        }
        return maximum;
    }
    T min()const{
        if(size==0)
        {
            cout<<"Vector is empty!No minimum element";
            return T();
        }
        T minimum=data[0];
        for(int i=1;i<size;i++)
        {
            if(data[i]<=minimum)
            {
                minimum=data[i];
            }
        }
        return minimum;
    }
    void sort(){
        for(int i=0;i<this->size;i++)
        {
            for(int j=i+1;j<this->size;j++)
            {
                if(data[i]>data[j])
                {
                    swap(data[i],data[j]);
                }
            }
        }
    }
    void display ()const{
        for(int i=0;i<size;i++)
        {
            cout<<data[i]<<" ";
        }
    }
    void toset(int index,T value)
    {
        if(index<size&&index>=0)
        {
            data[index]=value;
        }
        else
        {
            cout<<"Invalid index";
        }
    }
    T toget(int index)const{
            if(size==0||index>=size||index<0)
            {
                //throw "Error invalid index or Vector is empty";
                return T();
            }
            return data[index];
    }
    ~Vector(){delete [] data;}
};