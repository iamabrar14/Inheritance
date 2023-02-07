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
    }
};
class programmer : public student,public person{
   public:
   void display(){
    cout<<"I am a programmer"<<endl;
   }
};

int main()
{   person o1;
    student o2;
    programmer o3;
    o1.display();
    o2.display();
    o3.display();
    
     return 0;
}