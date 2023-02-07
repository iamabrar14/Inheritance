#include <bits/stdc++.h>
using namespace std;
class person{
    public:
    void display(){
        cout<<"I am a person "<<endl;
    }
};
class student:public person{
    public:
    void display(){
        cout<<"I am a student"<<endl;
        cout<<"Now we will learn about method overriding"<<endl;
    }
};
int main()
{   person o1;
    student o2;
    o1.display();
    o2.display();
    
     return 0;
}