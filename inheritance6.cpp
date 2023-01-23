#include <bits/stdc++.h>
using namespace std;
//Mode private component protected
class ProgrammingLanguage {
     protected:
     int oop(){
        cout<<"CPP,Java<python are few famous oop languages"<<endl;
     }
     public:
     int structured(){
        oop();
        cout<<"C,Algol,Kotlin are few famous structured languages"<<endl;
     }

};
class HumanLanguages :private ProgrammingLanguage{
    public:
    int bengali(){
        cout<<"Bengali is our mother language"<<endl;
    }
    int english(){
        cout<<"English is International language"<<endl;
        structured();
    }
};
int main(){
   HumanLanguages obj;
   obj.bengali();
   obj.english();
   return 0;
}