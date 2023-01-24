#include <bits/stdc++.h>
using namespace std;
class A
{
 	public:
 	float x;
 	void getx()
    {
 	    cout << "enter value of x: "; cin >> x;
    }
};
class B
{
 	public:
 	float y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class C : public A, public B   //C is derived from class A and class B
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y<<endl;
 	}
    void sub()
    {
        cout<<"Sub = "<<x-y<<endl;
    }
    void multi(){
        cout<<"Multiplication = "<<x*y<<endl;
    }
    void division(){
        float z;
        z=x/y;
        cout<<"Division = "<<z<<endl;
    }
};
int main(){
    C obj;
    obj.getx();
    obj.gety();
    obj.sum();
    obj.sub();
    obj.multi();
    obj.division();
    return 0;
}
