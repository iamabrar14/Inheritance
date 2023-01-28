#include <bits/stdc++.h>
using namespace std;
class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show(){
            cout << "First Number :" << base1int<<endl;
            cout << "Second Number :" << base2int<<endl;
            cout << "Third Number  :" << base3int<<endl;
            cout << "The sum of these values is " << base1int + base2int + base3int << endl;
        }
};
int main()
{   int i,j,k;
    cout<<"Enter the value of 3 integer : ";
    cin>>i>>j>>k;
    Derived abrar;
    abrar.set_base1int(i);
    abrar.set_base2int(j);
    abrar.set_base3int(k);
    abrar.show();
    
    return 0;
}
