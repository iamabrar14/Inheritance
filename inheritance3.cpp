#include <iostream>
using namespace std;
//mode public component protected 
class mammals{
    protected:
    void heart(){
        cout<<"They have heart"<<endl;
    }
    public:
    void legs(){
        cout<<"They have legs"<<endl;
        heart();
    }
};
class human : public mammals{
    public:
    void talk(){
        legs();
        cout<<"They can talk"<<endl;
    }
    void brain(){
      cout<<"Human brain is greatest amongst other mammals"<<endl;
      
    }
};
int main(){
       human obj;  
        
       obj.talk();
       obj.brain();
      return 0;
}