#include <bits/stdc++.h>
using namespace std;
//Mode protected component private
class sports{
    private:
    int outdoor(){
        cout<<"Football is the most famous sports amongst all other sports"<<endl;
    }
    public:
    int Getoutdoor(){
        outdoor();
    }
};
    class football : protected sports{
        public:
        int laliga(){
            Getoutdoor();
            cout<<"Real Madrid & Barcelona are two biggest clubs of Europe"<<endl;
            
        }
        int PL(){
            cout<<"Manchester United & Liverpool are two biggest clubs of England"<<endl;
        }
    };
int main(){
    football obj;
    obj.laliga();
    obj.PL();
    return 0;
}
