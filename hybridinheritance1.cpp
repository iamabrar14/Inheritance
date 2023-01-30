#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    void Departments(){
        cout<<"There are few departments in SMUCT"<<endl;
    }
};
class B:public A{
    public:
    void CSE(){
        Departments();
        cout<<"In SMUCT,CSE department doing well now a days"<<endl;
    }
};
class C:public A{
    public:
    void FDT(){
        
        cout<<"SMUCT is well known for Fashion designing & technology"<<endl;
    }
};
class D: public C{
    public:
    void AMMT(){
        
        cout<<"AMMT & FDT are almost two same departments"<<endl;
    }

};

int main()
{   D obj1;
    B obj2;
    obj2.CSE();
    obj1.AMMT();
    obj1.FDT();
    return 0;
}