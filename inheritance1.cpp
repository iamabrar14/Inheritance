#include <iostream>
using namespace std;
//Mode public component public
class mammals{
    public:
    void heart(){
        cout<<"They have heart"<<endl;
    }
    void legs(){
        cout<<"They have legs"<<endl;
    }
};
class human : public mammals{
    public:
    void talk(){
        cout<<"They can talk"<<endl;
    }
    void brain(){
      cout<<"Human brain is greatest amongst other mammals"<<endl;
    }
};
int main(){
       human obj;
       obj.heart();
       obj.talk();
       obj.brain();
       
       return 0;
}