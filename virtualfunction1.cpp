#include <bits/stdc++.h>
using namespace std;
class base{
   public:
   int var_base=1;
  virtual void display(){  //virtual keyword,important in runtime polymorphism 
      cout<<"Displaying base variable : "<<var_base<<endl;
   }
};
class derived : public base{
   public:
   int var_derived=2;
   void display(){
      cout<<"Displaying base variable : "<<var_base<<endl;
      cout<<"Displaying derived variable : "<<var_derived<<endl;
   }
};
int main()
{    base *basepointer;
    base obj1;
    derived obj2;
    basepointer=&obj2;
    basepointer ->display();
    
     return 0;
}