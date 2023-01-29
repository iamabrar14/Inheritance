#include <bits/stdc++.h>
using namespace std;
class Mammals{
    public:
     void A(){
       cout<<"Mammals are greatest amongst other classes of animals "<<endl;
     }
     void B(){
        cout<<"Human,Dogs,Cats,Lions,Tigers are some examples of mammals "<<endl;
     }
};
class Human : public Mammals{
      public:
      void h1(){
        cout<<"Humans are the greatest creature"<<endl;
      }
      void h2(){
        cout<<"Humans can talk & their they are intelligent than any other Mammals!"<<endl;
      }
};
class lion:public Mammals{
    public:
    void l1(){
        cout<<"Lion is the king of forest "<<endl;
    }
    void l2(){
        cout<<"African lions have been admired throughout history for as symbols of courage and strength."<<endl;
    }
};

int main()
{
    lion obj;
    Human o;
    
    obj.A();
    o.h2();
    obj.B();
    obj.l1();
    obj.l2();
     return 0;
}