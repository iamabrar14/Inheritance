#include <bits/stdc++.h>
using namespace std;
//Mode private component public
class ProgrammingLanguage {
     public:
     int oop(){
        cout<<"CPP,Java<python are few famous oop languages"<<endl;
     }
     int structured(){
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
        oop();
        structured();
    }
};
int main(){
   HumanLanguages obj;
   obj.bengali();
   obj.english();
   return 0;
}