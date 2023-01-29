#include <bits/stdc++.h>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"How are you? "<<endl; //greeting in English
    }

};
class base2{
    public:
    void greet(){
    cout<<"Kemon acho?"<<endl; //greeting in bengali 
    }
};
class derived : public base1 ,public base2{
    public:
    void greet(){
        base1::greet();
    }   //solving ambiguity resolution (class name :: function name)
       //now if we call the greet function of derived class,it will show output of base 1

};

int main()
{    base2 o2;
    derived o;
    o.greet();
    o2.greet();
    return 0;
}