#include <iostream>
using namespace std;
class vehicle{
public:
void run(){
    cout<<"Can Run "<<endl;
    }
void carry(){
    cout<<"Can carry"<<endl;
}
};
class car:public vehicle{
public:
void drift(){
    cout<<"Can drift"<<endl;
}
void ac(){
    cout<<"Can use air conditioner"<<endl;
}
};
int main(){
    car obj1;
    obj1.drift();
    obj1.ac();
    return 0;
}