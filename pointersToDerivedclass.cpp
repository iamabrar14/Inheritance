#include <bits/stdc++.h>
using namespace std;
class base{
   public:
   int var_base;
   void display(){
      cout<<"Displaying base variable "<<var_base<<endl;
   }
};   
class derived : public base{
   public:
   int var_derived;
   void display(){
      cout<<"Displaying base variable "<<var_base<<endl;
      cout<<"Displaying derived variable "<<var_derived<<endl;
   }
};
int main()
{    base *baseclass;
     base obj1;
     derived obj2;
     baseclass=&obj2;
     baseclass->var_base=20;
     baseclass->display();
    
     return 0;
}