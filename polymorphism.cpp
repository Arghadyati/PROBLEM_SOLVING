#include <iostream>
using namespace std;
class complex{
    public:
    int real,imag;
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    void showcomplex(){
        cout<<this->real<<"i+"<<this->imag<<"j"<<endl;
    }
    void operator +(complex&obj){
        int newreal=this->real+obj.real;
        int newimag=this->imag+obj.imag;
        cout<<newreal<<"i+"<<newimag<<"j"<<endl;
    }
};

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    complex c1(1,3);
    c1.showcomplex();
    complex c2(2,5);
    c2.showcomplex();
    c1+c2;
    dog d1;
    d1.speak();
    return 0;
}
